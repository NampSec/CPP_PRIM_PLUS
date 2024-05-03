// studenti.h -- defining a Student class using private inheritance
#ifndef STUDENTI_H_
#define STUDENTI_H_

#include <iostream>
#include <string>
#include <valarray>

class Student : private std::valarray<double>, private std::string
{
private:
    typedef std::valarray<double> ArrayDb;
    // private method for scores output
    std::ostream & arr_out(std::ostream & os) const;

public:
    Student() : ArrayDb(), std::string("Null Student") { }
    explicit Student(const std::string &s) : ArrayDb(), std::string(s) { }
    explicit Student(int n) : ArrayDb(n), std::string() { }
    Student(const std::string &s, int n) : ArrayDb(n), std::string(s) {}
    Student(const char *str, const double *pd, int n):std::string(str), ArrayDb(pd, n) {}
    ~Student() {}   
    double Average() const;
    double & operator[](int i); // 这个是引用，且无const即该函数可以修改类成员，即arr[i] = 0
    double operator[](int i) const; // 这个是const,代表该函数没法修改类成员，且返回的是一个副本
    const std::string & Name() const;
// friends
    // input
    friend std::istream & operator>>(std::istream & is, Student & stu); // 1 word
    friend std::istream & getline(std::istream & is, Student & stu); // 1 line
    // output
    friend std::ostream & operator<<(std::ostream & os, const Student & stu);
};
#endif