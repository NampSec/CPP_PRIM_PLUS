#include <iostream>

int main()
{
    using namespace std;
    char firstName[20];
    char lastName[20];
    cout << "What is your first name?";
    cin.getline(firstName, 20);
    cout << "What is your last name?";
    cin.getline(lastName, 20);
    cout << "What letter grade do you deserve?";
    char grade;
    cin >> grade;
    cout << "What is your age?";
    int age;
    cin >> age;
    cout << "Name: " << firstName << " " << lastName << endl;
    (cout << "Grade: ").put(grade + 1) << endl;
    cout << "Age: " << age << endl;
    return 0;
}