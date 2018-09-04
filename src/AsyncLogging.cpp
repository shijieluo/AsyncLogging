#include "AsyncLogging.h"
#include "Mutex.h"
#include "LogStream.h"

namespace jlog {
    
void AsyncLogging::append(char* logLine, int len) {
    MutexLockGuard mutex(mutex_);
    if(len <= currentBuffer_->leftSize()) {
        currentBuffer_->append(logLine, len);
    }else {
        full_.push(pBuffer(currentBuffer_.release()));
        if(empty_.size()) {
            currentBuffer_ = std::move(empty_.top());
            empty_.pop();
        }else {
            currentBuffer_.reset(new Buffer<SMALLBUFFER>);
        }
        cond_.notify();        
    }    
}

void AsyncLogging::thread_func(){
    LogStream output(filename_);    
    while(1) {
        {
            MutexLockGuard mutex(mutex_);
            if(full_.size()) {
                pBuffer bufferToWrite = std::move(full_.front());
                full_.pop();
                output.flushLog(bufferToWrite);                
                if(full_.size() + empty_.size() < 25) {
                    bufferToWrite->bzero();
                    empty_.push(pBuffer(bufferToWrite.release()));                
                } 
            }else {
                cond_.wait();
            }
        }
    }
}


}