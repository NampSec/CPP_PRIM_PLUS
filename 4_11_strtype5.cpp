#include <iostream>

int main()
{
	using namespace std;
	enum test {a, b};
	test ss = 1;
	
	struct torgle_register
	{
		unsigned int SN : 4;
		unsigned int : 4; // 没有名称,跳过这四位
		bool goodIn : 1;
		bool goodTorgle : 1;
		union
		{
			long id_num;
			char id_char[20];
		};
	};
	cout << u8"你好,世界" << endl;
	return 0;
}
