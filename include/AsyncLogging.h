// main class
#ifndef ASYNCLOGGING_H
#define ASYNCLOGGING_H
#include <iostream>
#include <queue>
#include "Mutex.h"
#include "Condition.h"
#include "Buffer.h"
#include "Thread.h"
#include <cstring>
#include <memory>
#include <string>
#include <stack>
#include <queue>

namespace jlog {

class AsyncLogging {
    public:
    AsyncLogging(const std::string& filename): mutex_(), 
                    cond_(mutex_),
                    currentBuffer_(new Buffer<SMALLBUFFER>),
                    full_(),
                    empty_(),
                    filename_(filename),
                    thread_(std::bind(&AsyncLogging::thread_func, this)) {
        auto pBuffer = currentBuffer_.get();
        pBuffer->bzero();
    }
    //frondend
    void append(char *logLine, int len);
    //backend
    void thread_func();

    void initializeLogging(){
        thread_.start();
    }
    void stopLogging(){
        thread_.stop();
    }

    private:
    MutexLock mutex_;
    Condition cond_;
    typedef std::unique_ptr<Buffer<SMALLBUFFER>> pBuffer;    
    typedef std::queue<pBuffer>   fullBufferQueue;
    typedef std::stack<pBuffer>   emptyBufferStack;        
    pBuffer currentBuffer_;
    fullBufferQueue full_;
    emptyBufferStack empty_;
    const std::string& filename_;
    Thread thread_;    
};

}
#endif