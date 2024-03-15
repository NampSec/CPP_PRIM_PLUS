#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char str1[50];
    const char* str2 = "done";
    int word_num = 0;
    cin >> str1;
    while(strcmp(str1, str2))
    {
        cin >> str1;
        word_num += 1;
    }
    cout << "word num is : " << word_num << endl;
    return 0;
}