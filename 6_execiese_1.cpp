#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    char ch;
    while((ch = cin.get()) != '@')
    {
        if (islower(ch))
			ch = toupper(ch);
		cout << ch;
    }
	return 0;
}
