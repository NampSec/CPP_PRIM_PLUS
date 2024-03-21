// decltype与后置返回类型的使用
#include <iostream>
template <typename T>
auto gt(int x, float y) -> decltype(x + y)
{
    return x + y;
}
struct data
{
    char name[40];
    mutable int access;
};


void song(const char * name = "O my papa", int n = 1);

int main()
{
    const data d = {"hello", 1};
}

// mark as the day of emo and masteratu
