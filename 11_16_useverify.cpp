#include "11_16_verify.h"
#include <iostream>


int main()
{
    using Stonewt::Stonewt;
    Stonewt s1(1, 2.0);
    double s2 = 2.0;
    Stonewt total1;
    Stonewt total2;
    Stonewt total3;
    total1 = s1 + s2;
    total2 = 2.0 + s1;
    return 0;
}
