#include <iostream>

int main(void)
{
    using namespace std;
    int x;
    string  str1;
    getline(cin, str1);
    cin.fail();
    x = 1, 024;
    cout << x << endl;
    return 0;
}