#include <iostream>

int main()
{
	using namespace std;
	int height;
    cout << "Enter your height(inch):_\b";
    cin >> height;
    cout << endl;
    int height_feet = height / 12;
    int height_inches = height % 12;
    cout << "Your height is " << height_feet << " feet and " << height_inches << " inches.\n";
	
	return 0;
}
