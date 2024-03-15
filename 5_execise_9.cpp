#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string str1;
    string str2 = "done";
    int word_num = 0;
    cin >> str1;
    while(str1 != str2)
    {
        cin >> str1;
        word_num += 1;
    }
    cout << "word num is : " << word_num << endl;
    return 0;
}