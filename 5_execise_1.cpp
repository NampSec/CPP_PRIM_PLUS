#include <iostream>

int main(void)
{
    using namespace std;
    int x, y;

    cin >> x >> y;

    if (x >= y)
    {
        int temp;
        temp = x;
        x = y;
        y = temp;
    }
    int sum = 0;

    for (size_t i = x; i <=  y; ++i)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}