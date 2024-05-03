// stacktp.h -- a stack template
#ifndef STACKTP_H_
#define STACKTP_H_

template <typename Type>
class Stack
{
private:
    enum { MAX = 10 };              // maximum stack size
    Type items[MAX];                // holds stack items
    int top;                        // index of top stack item
public:
    Stack();             // constructor
    bool isempty() const;
    bool isfull() const;
    bool push(const Type & item); // add item to stack
    bool pop(Type & item);  // pop top into item
};

template <typename Type>
Stack<Type>::Stack()
{
    top = 0;
}

template <typename Type>
bool Stack<Type>::isempty() const
{
    return top == 0;
}

template <typename Type>
bool Stack<Type>::isfull() const
{
    return top == MAX;
}

template <typename Type>
bool Stack<Type>::push(const Type & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

template <typename Type>
bool Stack<Type>::pop(Type & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}

#endif