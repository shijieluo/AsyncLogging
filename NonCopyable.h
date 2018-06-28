#ifndef NONCOPYABLE_H
#define NONCOPYABLE_H
#include<iostream>

class NonCopyable {
    private:
    NonCopyable(const NonCopyable& object){}
    public:
    NonCopyable(){}
    virtual ~NonCopyable(){}
};
#endif