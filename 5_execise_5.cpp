#include <iostream>

int main(void)
{
    using namespace std;

    const char * Months[12] = 
    {
        "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
    };
    int MonthsNum[12];
    for (int i = 0; i < 12; ++i)
        cin >> MonthsNum[i];
    
    int sum = 0;
    for(int i = 0; i < 12; ++i)
    {
        cout << Months[i] << ": " << MonthsNum[i] << endl;
        sum += MonthsNum[i];
    }
    cout << "Total: " << sum << endl;
    return 0;

}