#include <iostream>
const double *f1(const double arr[], int n);
const double *f2(const double[], int);
const double *f3(const double *, int);

int main()
{
    using namespace std;
    double av[3] = {1112.3, 1542.6, 2227.9};

    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;
    cout << "Using pointers to fuctions:\n";
    cout << "Address Value\n";
    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    // pb  a pointer to first element of pa
    auto pb = pa;
    cout << "\nUsing an array of pointers to functions:\n";
    cout << "Address Value\n";
    for (int i = 0; i < 3; i++)
        cout << (*pa[i])(av, 3) << ": " << *(*pa[i])(av, 3) << endl;

    cout << "\nUsing a pointer to a pointer to a function:\n";
    cout << "Address Value\n";
    for (int i = 0; i < 3; i++)
        cout << pb[i](av, 3) << ": " << *(*pb[i])(av, 3) << endl;
    
    cout << "\nUsing pointers to an array of pointers:\n";
    auto pc = &pa;
    cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
    const double *(*(*pd)[3])(const double *, int) = &pa;
    cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
    return 0;
}

const double *f1(const double arr[], int n)
{
    return arr;
}
const double *f2(const double arr[], int)
{
    return arr + 1;
}
const double *f3(const double * arr, int)
{
    return arr + 2;
}