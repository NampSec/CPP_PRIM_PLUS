// newexcp.cpp -- the bad_alloc exception
#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

struct Big
{
    double stuff[20000];
};

int main()
{
    Big * pb;
    try // stack的大小一般在8M，heap的大小不知道
    {
        cout << "Trying to get a big block of memory:\n";
        pb = new Big[10000]; // 160,000,000 bytes
        cout << "Got past the new request:\n";
    }
    catch(bad_alloc & ba)
    {
        cout << "Caught the exception!\n";
        cout << ba.what() << endl;
        exit(EXIT_FAILURE);
    }
    
}
