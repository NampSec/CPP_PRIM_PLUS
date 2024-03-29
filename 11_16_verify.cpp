#include "11_16_verify.h"
namespace Stonewt
{
    Stonewt::Stonewt()
    {
        stone = 0;
        pounds = 0;
    }
    Stonewt::Stonewt(double p, double s)
    {
        stone = s;
        pounds = p;
    }

    Stonewt::Stonewt(double p) // 此时会存在隐式类型转换
    {
        stone = p;
        pounds = 0;
    }

    Stonewt ::~Stonewt()
    {
        // destructor
    }

    // Stonewt Stonewt::operator+(double p)
    // {
    //     Stonewt temp;
    //     temp.stone = stone + p;
    //     return temp;
    // }

    // Stonewt operator+(double p, Stonewt &s)
    // {
    //     Stonewt temp;
    //     temp.stone = s.stone + p;
    //     return temp;
    // }
    // Stonewt::operator double () const
    // {
    //     return stone + pounds;
    // }

    // const Stonewt operator+(const Stonewt &s1, const Stonewt &s2)
    // {
    //     Stonewt temp;
    //     temp.stone = s1.stone + s2.stone;
    //     temp.pounds = s1.pounds + s2.pounds;
    //     return temp;
    // }
    Stonewt Stonewt::operator+(double x) const
    {
        Stonewt temp;
        temp.stone = x;
        return temp;
    }
    Stonewt operator+(double x, Stonewt &s)
    {
        Stonewt temp;
        temp.stone = s.stone + x;
        return temp;
    }
} // namespace VERIFY
