// dma.hpp -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class baseDMA
{
private:
    char * label;
    int rating;
public:
    baseDMA(const char * l = "null", int r = 0);
    baseDMA(const baseDMA & rs); // copy constructor
    virtual ~baseDMA(); // virtual destructor
    baseDMA & operator=(const baseDMA& rs); // assignment operator
    friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};
// derived class without DMA
// no destructor needed
// use implicit copy constructor
// use implicit assignment operator
class lacksDMA : public baseDMA
{
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blacnk", const char * l = "null", int r = 0);
    lacksDMA(const char * c, const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
};
// derived class with DMA
class hasDMA : public baseDMA
{
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null", int r = 0);
    hasDMA(const char * s, const baseDMA &rs);
    hasDMA(const hasDMA & hs); // copy constructor，存在指针需要深复制
    ~hasDMA(); // destructor，存在动态内存指针，需要释放
    hasDMA& operator=(const hasDMA & rs); // assignment operator
    friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif