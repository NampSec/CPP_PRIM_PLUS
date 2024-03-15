#include <iostream>
#include <ctime>
int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float sec;
    cin >> sec;
    clock_t delay = sec * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)
        ; // note the semicolon
    cout << "done";
    return 0;
}