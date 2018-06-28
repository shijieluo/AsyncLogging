// author : luoshijie
// wrap pthread mutex lock
#ifndef MUTEX_H
#define MUTEX_H
#include<iostream>
#include<pthread.h>
#include<assert.h>
class NonCopyable;
class MutexLock : NonCopyable{
    public:
    MutexLock(){
        pthread_mutex_init(&mutex_, NULL);
    }
    lock(){
        pthread_mutex_lock(&mutex_);
    }
    unlock(){
        pthread_mutex_unlock(&mutex_);
    }
    ~MutexLock(){
        pthread_mutex_destroy(&mutex_);
    }
    private:
    pthread_mutex_t mutex_;
    friend class Condition;
};
clsss MutexLockGuard : NonCopyable{
    public:
    MutexLockGuard(MutexLock& mutex):mutex_(mutex){
        _mutex.lock();
    }
    ~MutexLockGuard(){
        _mutex.unlock();
    }
    private:
    MutexLock mutex_;

}
#endif