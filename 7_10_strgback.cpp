#include <iostream>

char * buildstr(char c, int n);
int main()
{
	using namespace std;
	int times;
	char ch;

	cout << "Enter a charcter: ";
	cin >> ch;
	cout << "Enter an interger: ";
	cin >> times;
	char *ps = buildstr(ch, times);
	cout << ps << endl;
	delete [] ps;
	ps = buildstr('+', 20);
	cout << ps << "-DONE-" << ps << endl;
	delete [] ps;
	return 0;
}

char * buildstr(char c, int n)
{
	char *pstr = new char[n + 1];
	for (int i = 0; i < n; i++)
		pstr[i] = c;
	pstr[n] = '\0';
	return pstr;
}