#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string firstname, lastname;
    cout << "Enter your first name: ";
    getline(cin, firstname);
    cout << "Enter your last name: ";
    getline(cin, lastname);
    cout << "Hello " << firstname << " " << lastname << "!" << endl;
    return 0;
}