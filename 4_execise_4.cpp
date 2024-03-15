#include <iostream>
#include <string>
#include <cstring>
int main()
{
    using namespace std;
    char firstname[20], lastname[20];
    cout << "Enter your first name: ";
    cin.getline(firstname, 20);
    cout << "Enter your last name: ";
    cin.getline(lastname, 20);
    char* fullname = new char[strlen(firstname) + strlen(lastname) + 3];
    strcpy(fullname, firstname);
    strcat(fullname, ", ");
    strcat(fullname, lastname);
    cout << "Hello " << fullname << "!" << endl;
    // string firstname, lastname;
    // cout << "Enter your first name: ";
    // getline(cin, firstname);
    // cout << "Enter your last name: ";
    // getline(cin, lastname);
    // string fullname = firstname + ", " + lastname;
    // cout << "Hello " << fullname << "!" << endl;
    return 0;
}