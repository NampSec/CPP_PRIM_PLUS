#include <iostream>

int main(void)
{
    using namespace std;

    int ch;
    cin >> ch;
    int sum = 0;
    while (ch != 0)
    {
        sum = sum + ch;
        cin >> ch;
    }
    cout << sum << endl;
    return 0;
}