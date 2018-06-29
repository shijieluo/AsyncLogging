// main class
#ifndef ASYNCLOGGING_H
#define ASYNCLOGGING_H
#include "MutexLock.h"
#include "Condition.h"
class AsyncLogging {
    public:
    AsyncLogging(): mutex_(), 
                    cond_(mutex_){

    }
    //frondend
    
    //backend
    private:
    MutexLock mutex_;
    Condition cond_;
};
#endif