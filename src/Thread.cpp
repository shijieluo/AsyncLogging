#include <iostream>

#include "Thread.h"
#include <assert.h>

namespace jlog {
    namespace internal {
        void *startThread(void *obj) {
            Thread *t = static_cast<Thread*>(obj);
            t->runInThread();
        }
    }
}
namespace jlog {
Thread::Thread(const threadFunc& func): started_(false),
                                           joined_(false),
                                           tid_(0),func_(func),
                                           arg_(0){}
Thread::~Thread(){
    if(started_ && !joined_) {
        pthread_detach(tid_);
    }
}

void Thread::runInThread() {    
    func_();
}
void Thread::start() {
    assert(!started_);
    started_ = true;    
    pthread_create(&tid_, NULL, &jlog::internal::startThread, this);
}

void Thread::join() {
    assert(started_);
    assert(!joined_);
    joined_ = true;
    pthread_join(tid_, NULL);
}

void Thread::stop() {
    assert(started_);
    started_ = false;
    pthread_exit(0);
}

}