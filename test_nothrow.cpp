#include <iostream>
#include <stdexcept>

int main()
{
    int * pd = (std::nothrow)just_throw();
    if(0 == pd)
    {
        std::cout << "just_throw() is nothrow" << std::endl;
    }
    else
    {
        std::cout << "just_throw() is not nothrow" << std::endl;
    }
    
}

double just_throw()
{
    throw std::range_error("just throw");
    throw std::runtime_error("just throw");
}