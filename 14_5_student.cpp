// studenti.cpp -- Student class using private inheritance
#include "14_4_studenti.h"
#include <iostream>
using std::ostream;
using std::endl;
using std::istream;
using std::string;

// public method
double Student::Average() const
{
    if (ArrayDb::size() > 0)
        return ArrayDb::sum() / ArrayDb::size();
    else
        return 0;
}

const string &Student::Name() const
{
    return (const string &)*this; // 强制类型转换返回基类
}

double &Student::operator[](int i)
{
    return ArrayDb::operator[](i); // 这里需要强制调用类的运算符函数
}

double Student::operator[](int i) const
{
    return ArrayDb::operator[](i);
}

// private method
ostream & Student::arr_out(ostream & os) const
{
    int i;
    int lim = ArrayDb::size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << ArrayDb::operator[](i) << " ";
            if (i % 5 == 4)
                os << endl;
        }
        if (i %5 != 0)
            os << endl;
    }
    else
        os << " empty array ";
    return os;
}

// friends
// using Stirng version of operator>>()
istream & operator>>(istream & is, Student & stu)
{
    is >> (string &)stu;
    return is;
}

// use string friend getline(ostream &, const string &)
istream & getline(istream & is, Student & stu)
{
    getline(is, (string &)stu);
    return is;
}
// use string version of operator<<()
ostream & operator<<(ostream & os, const Student & stu)
{
    os << "Scores for " << (const string &)stu << ":\n";
    stu.arr_out(os);
    return os;
}