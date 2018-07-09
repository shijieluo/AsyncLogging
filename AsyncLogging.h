// main class
#ifndef ASYNCLOGGING_H
#define ASYNCLOGGING_H
#include <iostream>
#include "MutexLock.h"
#include "Condition.h"
#include "Buffer.h"
class AsyncLogging {
    public:
    AsyncLogging(): mutex_(), 
                    cond_(mutex_){

    }
    //frondend
    void append(char *logLine, int len);
    //backend
    void threadFunc();
    private:
    MutexLock mutex_;
    Condition cond_;
    typedef           buffer
    typedef std::unique_ptr<buffer> pBuffer;
    buffers currentBuffer_;
};
#endif