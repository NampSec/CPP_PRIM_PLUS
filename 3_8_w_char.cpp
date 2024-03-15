// 3_7_w_char.cpp -- demo w_char
#include <iostream>

int main()
{
    using namespace std;
    wcout << u"你好, 世界!\n"; // 前面加L表示这是一个宽字符字符串
    wcin.get();
    wcin.get();
    return 0;
}