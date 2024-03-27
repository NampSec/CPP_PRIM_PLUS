#ifndef STACK_H_
#define STACK_H_

#include <iostream>
#include <cstdlib>

// template <class Type>
typedef unsigned long Type;
class Stack
{
private:
    enum {MAX = 10};
    int top;
    Type items[MAX];
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Type & item);
    bool pop(Type& item);
};

#endif