// wrap pthread functions
#ifndef THREAD_H
#define THREAD_H
#include<pthread.h>
#include "NonCopyable.h"

class Thread : NonCopyable {
    public:
    Thread();
    ~Thread();
    void start();
    void join();
    private:
    bool started_;
    bool joined_;
    pthread_t tid_;   
    void *func_;
    void *arg_;        
};
#endif