#include <iostream>
using namespace std;

#include "Thread.h"
#include <assert.h0>

Thread::Thread(void* func, void* arg): started_(false),
                                           joined_(false),
                                           tid_(0),func_(func),
                                           arg_(arg){}
Thread::~Thread(){
    if(started_ && !joined_) {
        pthread_detach(tid_);
    }
}

void Thread::start() {
    assert(!started_);
    started_ = true;
    pthread_create(&tid_, NULL, func_, arg_);
}

void Thread::join() {
    assert(started_);
    assert(!joined_);
    joined_ = true;
    pthread_join(tid_, NULL);
}