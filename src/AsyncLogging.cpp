#include "AsyncLogging.h"
#include "Mutex.h"
#include "LogStream.h"

namespace jlog {
    
void AsyncLogging::append(char* logLine, int len) {
    std::cout << "pending logmessage..." << std::endl;
    MutexLockGuard mutex(mutex_);
    if(len <= currentBuffer_->leftSize()) {
        currentBuffer_->append(logLine, len);
    }else {
          
        full_.push(std::move(currentBuffer_));
        
        if(empty_.size()) {
            currentBuffer_ = std::move(empty_.top());
            empty_.pop();
        }else {
            currentBuffer_.reset(new Buffer<SMALLBUFFER>);
        }        
        cond_.notify();
        currentBuffer_->append(logLine, len);                
    }    
}

void AsyncLogging::thread_func(){
    LogStream output(filename_);
    pBuffer bufferToSwap;
    pBuffer bufferToWrite(new Buffer<SMALLBUFFER>);
    std::cout << "asynlogging thread start.." << std::endl;
    while(1) {
        {
            MutexLockGuard mutex(mutex_);
            if(full_.size()) {
                bufferToSwap = std::move(full_.front());
                bufferToWrite.swap(bufferToSwap);                
                full_.pop();
                if(empty_.size()+full_.size()<25) {
                    empty_.push(std::move(bufferToSwap));
                }                    
            }else {
                cond_.wait();
            }
            
        }
        
        output.flushLog(bufferToWrite);
        bufferToWrite->bzero();
        bufferToWrite->reset();
        
        if(bufferToSwap) {
            bufferToSwap.reset();
        }        
    }
}


}