#include <iostream>

int main()
{
    const int code = 66;
    int x = 66;
    char c1 {31325}; // 缩窄了,不允许
    char c2 {66}; // 允许因为char能放下66
    char c3 {code}; // 允许,因为x是一个常量
    char c4 = {x}; // 不允许,x不是一个常量
    x = 31325;
    char c5 = x; // 这种初始化时允许的,而列表初始化是不允许的
    return 0;
}