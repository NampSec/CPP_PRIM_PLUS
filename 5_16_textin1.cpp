#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";
    cin >> ch;
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin >> ch;
    }
    cout << endl << count << " characters entered.\n";
    return 0;
    
}