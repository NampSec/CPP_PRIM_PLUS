#include <iostream>
class BASE
{
private:
    int _x, _y;
public:
    BASE(/* args */):_x(0),_y(0) {};
    BASE(int x, int y):_x(x), _y(y) {};
    void show()  const { std::cout << "x: "  << _x << " y: " <<  _y << std::endl;  }
    virtual ~BASE() = 0 ;
};

BASE::~BASE() {}


class  PA:  virtual public BASE
{
private:
    int _a;
public:
    PA(int x, int y, int a = 0):BASE(x,y), _a(a) {};
    PA(BASE &bs, int a = 0) : BASE(bs), _a(a) {};
    void show() const { BASE::show(); std::cout << "a: "  << _a << std::endl;  }
    ~PA() {};
};

class  PB: virtual public BASE
{
private:
    int _b;
public:
    PB(int x, int y, int b = 0):BASE(x,y), _b(b) {};
    PB(BASE &bs, int b = 0) : BASE(bs), _b(b) {};
    void show() const {BASE::show(); std::cout << "b: " << _b << std::endl; };
    ~PB() {};
};


class PP: public PA, public PB
{
private:
    int _c;
public:
    PP(int x, int y, int a, int b, int c = 0):BASE(x, y), PA(x,y,a), PB(x,y,b), _c(c) {}; // 对于虚基类，尝试这样
    PP(BASE &bs, int a, int b, int c = 0):BASE(bs), PA(bs,a), PB(bs,b), _c(c) {}; // 存在多个基类
    void show() const {PA::show(); PB::show(); std::cout << "c: " << _c << std::endl; }; // 会调用多次
    ~PP() {};
};

int main(int argc, char const *argv[])
{
    PP pp(1,2,3,4,5);
    pp.show();
    return 0;
}