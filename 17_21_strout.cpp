// strout.cpp -- incore formatting (output)
#include <iostream>
#include <sstream>
#include <string>

int main()
{
    using namespace std;
    ostringstream outstr;
    string hdisk;
    cout << "What's the name of your hard disk? ";
    getline(cin, hdisk);
    int cap;
    cout << "How many gigabytes in it? ";
    cin >> cap;
    outstr << "Your hard disk, " << hdisk << ", has " << cap << " gigabytes.\n";
    string result =  outstr.str();
    cout << result;
}