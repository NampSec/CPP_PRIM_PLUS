// arraytp.h -- template class with array
#ifndef ARRAYTP_H_
#define ARRAYTP_H_
template <class Type, int n>
class ArrayTP
{
private:
    Type arr[n];
public:

    ArrayTP() {}
    explicit ArrayTP(const Type & v);
    virtual Type & operator[](int i);
    virtual Type operator[](int i) const;
    virtual int size() const { return n; }
}