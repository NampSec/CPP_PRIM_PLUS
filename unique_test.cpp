#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;


unique_ptr<int> make_int(int n)
{
    return unique_ptr<int>(new int(n));
}
void show(unique_ptr<int> &pi)
{
    cout << *pi << endl;
}
int main()
{
    vector<unique_ptr<int>> vp(size);
    for (int i = 0; i < vp.size(); i++)
        vp[i] = make_int(rand() % 100); //  赋值临时unique_ptr
   vp.push_back(make_int(rand() % 100)); // 因为参数是一个临时变量，所以可以
    for_each(vp.begin(), vp.end(), show); // 使用for_each遍历
    return 0;
}