// 11_1_usetime0.cpp -- 测试类模板

#include <iostream>
#include "11_1_mytime0.h"

int main()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;
    cout << "planning time = "; planning.Show(); cout << endl;
    cout << "coding time = "; coding.Show(); cout << endl;
    cout << "fixing time = "; fixing.Show(); cout << endl;
    total = coding + fixing; 
    cout << "coding.Sum(fixing) = "; total.Show(); cout << endl;
    return 0;
}
