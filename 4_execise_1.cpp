#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    cout << "Enter number of an array you want to creat:" << endl;
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "Error: number of an array must be positive" << endl;
        return 0;
    }else
    {
        int* arr = new int[n];
		arr = arr; // to skip warning
        vector<int> vt (n);
    } 
    return 0;
}
