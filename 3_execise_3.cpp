#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter the number of seconds: ";
    long long seconds;
    cin >> seconds;
    cout << endl;
    int days = seconds / (24 * 60 * 60);
    int hours = (seconds % (24 * 60 * 60)) / (60 * 60);
    int minutes = (seconds % (24 * 60 * 60)) % (60 * 60) / 60;

    cout << seconds << " seconds = " << days << " days, " 
    << hours << " hours, " << minutes << " minutes, and "
     << seconds - (days * 24 * 60 * 60) - (hours * 60 * 60) - (minutes * 60) << " seconds." << endl;
    return 0;
}