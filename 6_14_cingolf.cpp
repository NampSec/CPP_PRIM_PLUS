#include <iostream>

const int Max = 5;
int main()
{
    using namespace std;
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter" << Max << " rounds.\n";
    int i;
    for (i = 0; i < Max; i++)
    {
        cout << "round #" << i+1 << ": ";
        while (!(cin >> golf[i])) // 如果输入异常,此时会进入循环
        // i只有在输入正常后才会跳过这个循环增加一
        {
            cin.clear();
            while (cin.get() != '\n') // 后面的都认为是一堆垃圾数据,除非回车
            {
                continue; // 
            }
            cout << "Please enter a number: ";
        }
        
    }
        //calcalate average
    double total = 0.0;
    for (size_t j = 0; j < i; ++j)
        total += golf[j];
    // report the result
    if (i == 0)
        cout << "No score\n";
    else
        cout << total / i << " = average score of " << i << " golf\n";
    cout << "Done.\n";
    return 0;
}