#include <iostream>

int main()
{
    using namespace std;
    wchar_t test1;
    char16_t test2;
    char32_t test3;
    cout << "The sizeof wchar_t in this system is: " << sizeof(test1) << endl;
    cout << "The sizeof char16_t is: " << sizeof(test2) << endl;
    cout << "The sizeof char32_t is: " << sizeof(test3) << endl;
    return 0;
}