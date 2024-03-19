#include <iostream>
void sink(double &r1); // 匹配左值参数
void sank(const double & r2); //匹配左值或者右值
void sunk(double && r3); // 匹配右值参数


void staff(double &rs);
void staff(const double &rcs);
void stove(double &r1);
void stove(const double &r2);
void stove(double && r3);

template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	using namespace std;
	double x = 55.5;
	const double y = 32.0;
	int a = 1;
	int b = 2;
	Swap(a,b);
	stove(x);
	stove(y);
	stove(x + y);
	return 0;
}
void stove(double &r1)
{
	std::cout << "1";
}
void stove(const double &r2)
{
	std::cout << "2";
}
void stove(double && r3)
{
	std::cout << "3";
}

