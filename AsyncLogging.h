// main class
#ifndef ASYNCLOGGING_H
#define ASYNCLOGGING_H
#include <iostream>
#include <queue>
#include "MutexLock.h"
#include "Condition.h"
#include "Buffer.h"
#include <cstring>
#include <memory>
class AsyncLogging {
    public:
    AsyncLogging(): mutex_(), 
                    cond_(mutex_),
                    currentBuffer_(new Buffer),
                    full_(),
                    empty_() {
        Buffer *pBuffer = currentBuffer_.get();
        memset(pBuffer,0 ,sizeof(pBuffer));
    }
    //frondend
    void append(char *logLine, int len);
    //backend
    void *threadFunc(void *arg);
    private:
    MutexLock& mutex_;
    Condition cond_;
    typedef std::unique_ptr<Buffer<Buffer<Buffer::SMALLBUFFER>> pBuffer;    
    typedef queue<pBuffer>   fullBufferQueue;
    typedef stack<pBuffer>   emptyBufferStack;        
    pBuffer currentBuffer_;
    fullBufferQueue full_;
    emptyBufferStack empty_;    
};
#endif