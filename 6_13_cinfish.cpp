#include <iostream>

const int Max = 5;

int main()
{
    using namespace std;
    // get data
    double fish[Max];
    cout << "Please enter the weights of your fish.\n";
    cout << "You may enter up to " << Max << " fish <q to terminate.>\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i])
    {
        if (++i < Max)
            cout << "fish #" << i+1 << ": ";
    }
    //calcalate average
    double total = 0.0;
    for (size_t j = 0; j < i; ++j)
        total += fish[j];
    // report the result
    if (i == 0)
        cout << "No fush\n";
    else
        cout << total / i << " = average weight of " << i << " fish\n";
    cout << "Done.\n";
    return 0;
    
}