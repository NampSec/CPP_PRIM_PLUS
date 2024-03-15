#include <iostream>
#include <string>

int main()
{
	using namespace std;
	cout << R"-+(newline is not a \n)-+" << endl;
	cout << u8"你好,世界";
	return 0;
}