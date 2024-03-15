// forceconvert.cpp -- forcing type changes
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;
    // 下面会将double转化为int
    auks = 19.99 + 11.99;

    // thest statement add values as int
    bats = (int) 19.99 + (int) 11.99;
    coots = int(19.99) + int(11.99); // new C++ syntax
    cout << "auks = " << auks << endl;
    cout << "bats = " << bats << endl;
    cout << "coots = " << coots << endl;

    char ch = 'Z';
    cout  << "The code for " << ch << " is ";
    cout << (int) ch << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;
    return 0;
}
