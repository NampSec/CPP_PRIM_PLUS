// strtype4.cpp -- line input
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	const int ArSize = 20;
	string str1;
	string str2;
	char charr1[ArSize];
	char charr2[ArSize];

	cout << "Enter a string: ";
	cin.getline(charr1, ArSize); // getline(cin, str1);
	getline(cin, str2);
	return 0;
}
