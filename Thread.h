// wrap pthread functions
#ifndef THREAD_H
#define THREAD_H
#include<pthread.h>

class Thread {
    public:
    Thread();
    ~Thread();
    int start();
    int join();
    private:
    bool started_;
    bool joined_;
    pthread_t tid_;
    typedef void *thread_func threadFunc;
    typedef void *arg args;
    threadFunc func_;
    args arg_;        
};
#endif