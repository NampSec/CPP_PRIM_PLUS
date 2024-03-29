#include <iostream>
const int ArSize = 80;
char * left(const char * str, int n = 1); // 使用默认参数必须在函数原型声明时指定默认值
int main()
{
    using namespace std;
    char sample[ArSize];
    cout << "Enter a string:\n";
    cin.get(sample, ArSize);
    char *ps = left(sample, 4);
    cout << ps << endl;
    delete [] ps;
    ps = left(sample);
    cout << ps << endl;
    delete [] ps;
    return 0;
}

// this function returns a pointer to a new string
// consisting of the first n characters in the str string.
char * left(const char * str, int n) // 函数定义中不需要指定默认参数
{
    if (n < 0)
        n = 0;
    char *p = new char[n + 1];
    int i;
    for (i = 0; i < n && str[i]; i++)
        p[i] = str[i];
    while (i <= n)
        p[i++] = '\0';
    return p;
}
