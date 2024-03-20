// decltype与后置返回类型的使用
#include <iostream>
template <typename T>
auto gt(int x, float y) -> decltype(x + y)
{
    return x + y;
}
void song(const char * name = "O my papa", int n = 1);


