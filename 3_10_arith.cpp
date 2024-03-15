// arith.cpp -- some C++ arithmetic
#include <iostream>

int main()
{
    using namespace std;
    float hats, heads;

    cout.setf(ios::fixed, ios::floatfield);
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;
    cout << "The hat is: " << hats << endl;
    cout << "The head is: " << heads << endl;
    cout << "The sum is " << hats + heads << endl;
    cout << "The difference is " << hats - heads << endl;
    cout << "The product is " << hats * heads << endl;
    cout << "The quotient is " << hats / heads << endl;
    return 0;
}