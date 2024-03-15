#include <iostream>
#include <array>

int main()
{
	using namespace std;
	array<int, 10> inputNum;
	int i = 0;
	while((i < 10) && (cin >> inputNum[i]))
		++i;
	
	int sum = 0;
	int avg = 0;
	for (int j = 0; j < i; ++j)
		sum += inputNum[j];		
	cout << "Sum of the numbers: " << sum << endl;
	cout << "Average of the numbers: " << sum / i << endl;
	return 0;
}
