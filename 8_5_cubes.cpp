#include <iostream>
double cube(double x);
double refcube(double &x);
int main()
{
    using namespace std;
    double x = 3.0;

    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refcube(x);
    cout << " = refcube of " << x << endl;
    return 0;
}

double cube(double x)
{
    x *= x * x;
    return x;
}
double refcube(double &x)
{
    x *= x * x;
    return x;
}