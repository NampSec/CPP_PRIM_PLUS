// block.cpp -- use a block statement
#include <iostream>
int main()
{
    using namespace std;
    cout << "The Amazing Accouto will sum and average ";
    cout << "five numbers for you \n";
    cout << "Please enter five values:\n";
    double number;
    double sum;
    for (size_t i = 0; i < 5; i++)
    {
        cout << "Value " << i + 1 << ": ";
        cin >> number;
        sum += number;
    }
    cout << "The sum of the values is " << sum << endl;
    cout << "The average of the values is " << sum / 5 << endl;
    return 0;
    
}