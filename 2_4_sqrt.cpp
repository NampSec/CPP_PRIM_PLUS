//
// Created by YQX on 2024/2/28.
// sqrt.cpp -- using the sqrt() fuction

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
        << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}
