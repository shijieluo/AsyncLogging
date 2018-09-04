#ifndef NONCOPYABLE_H
#define NONCOPYABLE_H
#include<iostream>

namespace jlog {
    
class NonCopyable {
    private:
    NonCopyable(const NonCopyable& object){}
    public:
    NonCopyable(){}
    virtual ~NonCopyable(){}
};

}
#endif