// dma.cpp -- dma class method

#include "13_14_dma.hpp"
#include <cstring>

// baseDMA methods
baseDMA::baseDMA(const char * l, int r) {
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

baseDMA::baseDMA(const baseDMA & rs) { // 复制构造方法
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

baseDMA::~baseDMA() { // 析构方法
    delete [] label;
}

baseDMA & baseDMA::operator=(const baseDMA & rs) { // 赋值方法
    if (this == &rs) {
        return *this;
    }
    delete [] label;
    label = new char[std::strlen(rs.label) + 1]; // 清理默认生成函数的残留
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}
// 友元函数
std::ostream & operator<<(std::ostream & os, const baseDMA & rs) {
    os << "Label: " << rs.label << std::endl
       << "Rating: " << rs.rating << std::endl;
       return os;
}

// lacksDMA methods： 采用默认复制函数和默认赋值函数以及默认销毁函数，因为只有静态内存，没有动态
lacksDMA::lacksDMA(const char *c, const char *l, int r) : baseDMA(l, r) {
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

lacksDMA::lacksDMA(const char *c, const baseDMA & rs): baseDMA(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ls) {
    os << (const baseDMA &) ls << "Color: " << ls.color << std::endl;
    return os;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r) : baseDMA(l, r) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const baseDMA & rs) : baseDMA(rs) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs): baseDMA(hs) { // invoke base class copy constructor
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA() { // 析构方法
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs) {
    if (this == &hs) {
        return *this;
    }
    baseDMA::operator=(hs); // copy base portion
    delete [] style;
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & hs) {
    os << (const baseDMA &) hs << "Style: " << hs.style << std::endl;
    return os;
}
