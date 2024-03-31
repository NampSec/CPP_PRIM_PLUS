#ifndef __11_16_VERIFY_H__
#define __11_16_VERIFY_H__
namespace Stonewt
{
    class Stonewt 
    {
    private:
        double pounds;
        double stone;
    public:
        Stonewt (double p, double s); // constructor
        Stonewt (double p); // constructor
        Stonewt (); // default constructor
        ~Stonewt ();
        // Stonewt operator+(double p);
        // friend Stonewt operator+(double p, Stonewt &s);
        // operator double () const;
        // friend const Stonewt operator+(const Stonewt &s1, const Stonewt &s2);
        Stonewt operator+(double x) const; // 成员函数中的加法函数
        friend Stonewt operator+(double x, Stonewt &s);
    };
} // namespace name


#endif