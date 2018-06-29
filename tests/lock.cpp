// test wraped class MutexLock and class Condition
// multi-thread print mesg: 1 2 3, 
#include <iostream>
#include "../Mutex.h"
#include "../Condition.h"
#include <pthread.h>
int global = 1;
class Test {
    public:
    Test():mutex_(),cond_(mutex_) {}
    void *thread_func();
    private:
    MutexLock mutex_;
    Condition cond_;
}
void Test::*thread_func(void *arg) {
    int local = *(static_cast<int*>(arg));
    {
        MutexLockGuard(mutex_); 
        if(global != local) {
            cond_.wait();
        }
        global += 1;
        std::cout << local << endl;
    }
    cond_.notify();
}
int main(){
    Test *t = new Test;
    pthread_t tid[3];
    int a[3] = {1,2,3};    
    for(int i=0; i<3; i++) {
        pthread_create(&tid[i], NULL, t->thread_func, static_cast<void*>(&a[i]);
    }
    for(int i=0; i<3; i++) {
        pthread_join(tid[i], NULL);
    }
    return 0;
}