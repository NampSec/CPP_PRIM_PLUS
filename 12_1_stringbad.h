// stringbad.h -- flawed string class definition
#include <iostream>
#ifndef STRINGBAD_H_
#define STRINGBAD_H_

class StringBad
{
    private:
        char *str;
        int len;
        static int num_strings; // 这个和const不同,只有定义之后才会占用空间
    public:
        StringBad(const char *s);
        StringBad();
        ~StringBad();
    // friend function
        friend std::ostream & operator<<(std::ostream &os, const StringBad &st);
    
};

#endif