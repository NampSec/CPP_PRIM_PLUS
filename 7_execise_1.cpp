#include <iostream>
double avg(double x, double y);

int main()
{
    using namespace std;
    double x, y;
    while (cin >> x >> y && x && y)
    {
        cout << "Average of " << x << " and " << y << " is " << avg(x, y) << endl;
    }
    return 0;
}

double avg(double x, double y)
{
    return 2.0*x*y/(x + y);
}