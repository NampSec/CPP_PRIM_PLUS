#include <iostream>

int main(void)
{
    using namespace std;
    int num_row;
    cout << "Enter number of rows: ";
    cin >> num_row;

    for (size_t i = 1; i <= num_row; ++i)
    {
        for (size_t j = 0; j <num_row -  i; ++j) // 打印点数 
        {
            cout.put('.');
        }
        for (size_t k = 0; k <  i; ++k) // 打印星号
        {
            cout.put('*');
        }
        cout.put('\n');
    }
    return 0;    
}