#include <iostream>

void printStr(const char * str, int count = 0);

int main()
{
    char *str = "Hello World";
    printStr(str);
    printStr(str);
    printStr(str);
    printStr(str);
    return 0;
}

void printStr(const char * str, int count)
{
    if (count  == 0)
        return;
    count++;
    std::cout << str << std::endl;
}