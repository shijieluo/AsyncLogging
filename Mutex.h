// author : luoshijie
// wrap pthread mutex lock
#ifndef MUTEX_H
#define MUTEX_H
#include <iostream>
#include <pthread.h>
#include <assert.h>
#include "Noncopyable.h"
class MutexLock : NonCopyable{
    public:
    MutexLock(){
        pthread_mutex_init(&mutex_, NULL);
    }
    void lock(){
        pthread_mutex_lock(&mutex_);
    }
    void unlock(){
        pthread_mutex_unlock(&mutex_);
    }
    ~MutexLock(){
        pthread_mutex_destroy(&mutex_);
    }
    private:
    pthread_mutex_t mutex_;
    friend class Condition;
};
class MutexLockGuard : NonCopyable{
    public:
    explicit MutexLockGuard(MutexLock& mutex):mutex_(mutex) {
        mutex_.lock();
    }
    ~MutexLockGuard() {
        mutex_.unlock();
    }
    private:
    MutexLock& mutex_;
};
#endif