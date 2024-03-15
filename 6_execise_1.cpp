#include <iostream>
int main() {
    using namespace std;
    char ch;
    int line = 0;
    while((ch = cin.get()) != 'Q')
    {
        if (ch == '\n')
        {
            line++;
        }
    }
    return 0;
}