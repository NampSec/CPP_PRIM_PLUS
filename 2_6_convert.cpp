//
// Created by YQX on 2024/2/29.
// convert.cpp -- converts stone to pounds

#include <iostream>
int stonetolb(int);

int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

int stonetolb(int stone)
{
    return stone * 14;
}