//
// Created by YQX on 2024/2/29.
//
#include <iostream>
int agetomonths(int);

int main()
{
    using namespace std;
    cout << "Enter the age: ";
    int age;
    cin >> age;
    int months = agetomonths(age);
    cout << age << " age = " << months << " months." << endl;
    return 0;
}
int agetomonths(int age)
{
    return age * 12;
}