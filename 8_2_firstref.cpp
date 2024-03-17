#include <iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;
    cout << "Rats: " << rats << endl;
    cout << "Rodents: " << rodents << endl;
    rodents++;
    cout << "Rats: " << rats << endl;
    cout << "Rodents: " << rodents << endl;

    cout << "rats address = " << &rats << endl;
    cout << "rodents address = " << &rodents << endl;
    return 0;
}