#include <iostream>

int main(void)
{
    using namespace std;
    int ch; // 这里必须是int类型，方便和EOF进行,如果是char类型不一定有负数
    int count = 0;

    while((ch = cin.get()) != EOF)
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << "Total number of characters: " << count << endl;
    return 0;
}