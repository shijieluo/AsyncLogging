// wrap pthread functions
#ifndef THREAD_H
#define THREAD_H
#include <pthread.h>
#include <functional>
#include "NonCopyable.h"

namespace jlog {
class Thread : NonCopyable {
    public:
    typedef std::function<void()> threadFunc;
    Thread(const threadFunc&);
    ~Thread();
    void start();
    void join();
    void stop();
    void runInThread();
    private:
    bool started_;
    bool joined_;
    pthread_t tid_;    
    threadFunc func_;
    void *arg_;        
};

}

#endif