// stkoptr1.cpp -- testing stack of pointers
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "14_15_stcktp1.h"
const int Num = 10;
int main()
{
    std::srand(std::time(0));
    std::cout << "Please enter stack size: ";
    int stacksize;
    std::cin >> stacksize;
    // create an empty stack with stacksize slots
    Stack<const char *> st(stacksize);

    // in basket
    const char * in[Num] = {
        "1: Hanky Panky",
        "2: Pork Pie",
        "3: Pork Pie",
        "4: Pork Pie",
        "5: Pork Pie",
        "6: Pork Pie",
        "7: Pork Pie",
        "8: Pork Pie",
        "9: Pork Pie",
        "10: Pork Pie"
    };
    // out basket
    const char * out[Num];

    int processed = 0;
    int nextin = 0;
    while (processed < Num)
    {
        if (st.isempty())
            st.push(in[nextin++]);
        else if (st.isfull())
            st.pop(out[processed++]);
        else if (rand() % 2 && nextin < Num) // 百分之50的概率插入或弹出
            st.push(in[nextin++]);
        else
            st.pop(out[processed++]);
   }
   for (int i = 0; i < Num; i++)
       std::cout << out[i] << std::endl;
    std::cout << "Bye\n";
    return 0;
}
