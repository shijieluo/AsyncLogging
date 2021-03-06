// test wraped class MutexLock and class Condition
// multi-thread print mesg: 1 2 3, 
#include <iostream>
#include "Mutex.h"
#include "Condition.h"
#include <pthread.h>
int global = 1;
class Test {
    public:
    Test():mutex_(), cond_(mutex_) {}
    static void *thread_func(void *arg);
    private:
    MutexLock mutex_;
    Condition cond_;
};
static void* Test::thread_func(void *arg) {
    int local = *(static_cast<int*>(arg));
    {
        MutexLockGuard mutex(mutex_); 
        if(global != local) {
            cond_.wait();
        }
        global += 1;
        std::cout << local << std::endl;
    }
    cond_.notify();
}
int main(){
    Test *t = new Test;
    pthread_t tid[3];
    int a[3] = {1,2,3};    
    for(int i=0; i<3; i++) {
        pthread_create(&tid[i], NULL, Test::thread_func, (void *)(&a[i]));
    }
    for(int i=0; i<3; i++) {
        pthread_join(tid[i], NULL);
    }
    return 0;
}