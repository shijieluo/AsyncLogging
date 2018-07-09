#include "AsyncLogging.h"
#include "Mutex.h"

void AsyncLogging::append(char* logLine, int len) {
    MutexLockGuard mutex(mutex_);
    if(len <= currentBuffer_->leftSize()) {
        currentBuffer->append(logLine, len);
    }else {
        full_.push(currentBuffer_.release());
        if(empty_.size()) {
            currentBuffer_ = std::move(empty_.top());
            empty_.pop();
        }else {
            currentBuffer_.reset(new Buffer);
        }
        cond_.notify();        
    }    
}

void *thread_func(void *arg){

}