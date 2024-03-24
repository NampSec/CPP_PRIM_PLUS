#include <iostream>
#include <new>

const int BUF = 512;
const int N = 5;
char buffer[BUF];
int main()
{
    using namespace std;
    double *pd1, *pd2;
    int i;
    cout << "Calling new and placement new:\n";
    pd1 = new double[N]; // use heap
    pd2 = new (buffer) double[N]; // use buffer array
    for ( i = 0; i < N; i++)
    {
        pd2[i] = pd1[i] = 1000 + 20.0 * i;
    }
    cout << "Memory addresses:\n" << "heap: " << pd1
        << " static: " << (void *) buffer << endl;
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << ";";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }
    
    cout << "\nCalling new and placement new a second time:\n";
    double *p3, *p4;
    p3 = new double[N];
    p4 = new (buffer) double[N];
    for(i = 0; i < N; i++)
    {
        p4[i] = p3[i] = 1000 + 40.0 * i;
    }
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << p3[i] << " at " << &p3[i] << ";";
        cout << p4[i] << " at " << &p4[i] << endl;
    }
    cout << "\nCalling new and placement new a third time:\n";
    delete [] pd1;
    pd1 = new double[N];
    pd2 = new (buffer + N * sizeof(double)) double[N];
    for (i = 0; i < N; i++)
    {
        pd2[i] = pd1[i] = 1000 + 60.0 * i;
    }
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << ";";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }
    delete [] pd1;
    delete [] p3;
    return 0;
    
    
    
}