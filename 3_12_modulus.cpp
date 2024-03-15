// modulus.cpp -- uses % operator to convert lbs to stone
#include <iostream>
using namespace std;

int main()
{
    int lbs;
    int stone;
    int pounds;


    cout << "Enter weight in pounds: ";
    cin >> lbs;
    stone = lbs / 14;
    pounds = lbs % 14;
    cout << lbs << " pounds is " << stone << " stone, " << pounds << "pounds.\n";
    return 0;
}
