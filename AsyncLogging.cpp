#include "AsyncLogging.h"
#include "Mutex.h"
#include "logStream.h"

void AsyncLogging::append(char* logLine, int len) {
    MutexLockGuard mutex(mutex_);
    if(len <= currentBuffer_->leftSize()) {
        currentBuffer->append(logLine, len);
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

void *thread_func(void *arg){
    LogStream output(filename);    
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