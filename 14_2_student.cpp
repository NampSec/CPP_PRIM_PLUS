#include "14_1_studentc.hpp"
#include <iostream>
using std::ostream;
using std::endl;
using std::istream;
using std::string;
// public method
double Student::Average() const
{
    if (scores.size() > 0)
        return scores.sum() / scores.size();
    else
        return 0;
}

const string &Student::Name() const
{
    return name;
}

double &Student::operator[](int i)
{
    return scores[i]; // use valarray<double>::operator[]()
}

double Student::operator[](int i) const
{
    return scores[i];
}

// private method
ostream &Student::arr_out(ostream &os) const
{
    int i;
    int lim = scores.size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << scores[i] << " ";
            if (i % 5 == 4)
                os << endl;
        }
        if (i % 5 != 0)
            os << endl;
    }
    else
        os << " empty array " << endl;
    return os;
}

// friends
// use string version of operator>>()
istream &operator>>(istream &is, Student &stu)
{
    is >> stu.name;
    return is;
}

// use string friend geline(ostream &os, const string &str)
istream &getline(istream &is, Student &stu)
{
    getline(is, stu.name);
    return is;
}

// use string version of operator<<()
ostream &operator<<(ostream &os, const Student &stu)
{
    os << "Scores for " << stu.name << ":\n";
    stu.arr_out(os); // 使用辅助函数
    return os;
}