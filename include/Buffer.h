#ifndef BUFFER_H
#define BUFFER_H
#include <string.h>
#include <iostream>

namespace jlog {
    
enum {SMALLBUFFER=4096,LARGEBUFFER=4096*1000}; 
template<int Size>
class Buffer {
    public:       
    Buffer():cur_(data_){}
    ~Buffer(){};
    char* getCurDataPtr() {return cur_ ;}
    void add(int len){cur_ += len;}    
    int leftSize() {return static_cast<int>(end() - cur_);}
    void append(char *logLine, int len);
    void reset(){cur_ = data_;}
    void bzero(){::bzero(data_, sizeof(data_));}
    char* getBuffer() {return data_;}
    private:
    char* end(){return data_ + sizeof(data_);}    
    char* cur_;
    char data_[Size];        
};

template <int Size>
void Buffer<Size>::append(char* logLine, int len) {
    if(len > leftSize()) return;
    char *cur = getCurDataPtr();
    memcpy(cur, logLine, len);    
    add(len);
}

}
#endif