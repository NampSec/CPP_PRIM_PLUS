#include <iostream>
void print(double d, int width);
void print(long l, int width);
void print(int i, int width);

int main()
{
	using namespace std;
	print(1.0, 332);
	print(122L, 332);
	print(122, 332);
	unsigned int year = 100;
	print(year, 332);
}

void print(double d, int width)
{
	std::cout << "1";
}
void print(long l, int width)
{
	std::cout << "2";
}
void print(int i, int width)
{
	std::cout << "3";
}
