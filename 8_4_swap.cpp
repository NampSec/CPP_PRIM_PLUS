// swap.cpp -- swapping with references and with pointers
#include <iostream>

void swapr(int &a, int &b);
void swapp(int *a, int *b);
void swapv(int a, int b);

int main()
{
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;

    cout << "Wallet 1 has $" << wallet1 << endl;
    cout << "Wallet 2 has $" << wallet2 << endl;

    cout << "Using references to swap contents:\n";
    swapr(wallet1, wallet2);
    cout << "Wallet 1 has $" << wallet1 << endl;
    cout << "Wallet 2 has $" << wallet2 << endl;

    cout << "Using pointers to swap contents:\n";
    swapp(&wallet1, &wallet2);
    cout << "Wallet 1 has $" << wallet1 << endl;
    cout << "Wallet 2 has $" << wallet2 << endl;

    cout << "Using values to swap contents:\n";
    swapv(wallet1, wallet2);
    cout << "Wallet 1 has $" << wallet1 << endl;
    cout << "Wallet 2 has $" << wallet2 << endl;
    return 0;
}

void swapr(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapp(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapv(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}