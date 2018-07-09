#ifndef BUFFER_H
#define BUFFER_H
template<class Size>
class Buffer {
    public:
    enum {SMALLBUFFER=4096,LARGEBUFFER=4096*1000};    
    Buffer():cur_(data){}
    ~Buffer();
    char *getCurDataPtr() {return cur_ + strlen(data);}
    int leftSize() {return Size-strlen(data);}
    private:    
    char* cur_;
    char data[Size];        
};
#endif