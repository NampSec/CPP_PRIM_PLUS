//
// Created by YQX on 2024/3/1.
// hexoct2.cpp -- display values in hex and octal
#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; // 改变cout为16进制输出
    cout << "waist = " << waist << " (hex for 42)" << endl;
    cout << oct; // 改变cout为8进制输出
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    return 0;
}
