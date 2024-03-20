#include <iostream>

template <typename T>
T bigger(T &a, T &b)
{
    if ( a > b)
    {
        return a;
    }else
    {
        return b;
    }
    
}