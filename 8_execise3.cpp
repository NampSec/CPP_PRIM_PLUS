#include <iostream>
#include <string>

void iquote(int x);
void iquote(double x);
void iquote(std::string x);
int main()
{
    iquote(10);
    iquote(10.5);
    iquote("Hello, world!");
    return 0;
}

void iquote(int x)
{
    std::cout << "int: " << x << std::endl;
}

void iquote(double x)
{
    std::cout << "double: " << x << std::endl;
}
void iquote(std::string x)
{
    std::cout << "string: " << x << std::endl;
}
