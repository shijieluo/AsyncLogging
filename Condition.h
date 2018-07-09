//wrap contional lock
#ifndef CONDITION_H
#define CONDITION_H
#include <iostream>
#include <pthread.h>
#include <assert.h>
#include "Mutex.h"
#include "NonCopyable.h"
class Condition : NonCopyable{
    public:
    explicit Condition(MutexLock& mutex):mutex_(mutex) {
        pthread_cond_init(&cond_, NULL);
    }
    void wait() {
        pthread_cond_wait(&cond_, &(mutex_.mutex_));
    }
    void notify() {
        pthread_cond_signal(&cond_);
    }
    void notifyAll() {
        pthread_cond_broadcast(&cond_);
    }
    void waitForSeconds();
    ~Condition(){
        pthread_cond_destroy(&cond_);
    }
    private:
    pthread_cond_t cond_;
    MutexLock& mutex_;
};
#endif 