// funadap.cpp -- using function adapters
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional> // 用于内置的functionor，比如plus<>

void Show(double);
int main()
{
    using namespace std;
    double arr1[] = {20, 18, 14, 10, 8, 6};
    double arr2[] = {63, 87, 46, 12, 50, 90};
    vector<double> gr8{arr1, arr1 + 6};
    vector<double> m8{arr2, arr2 + 6};
    cout.setf(ios_base::fixed);
    cout << "gr8:\t";
    for_each(gr8.begin(), gr8.end(), Show);
    cout << endl;
    cout << "m8:\t";
    for_each(m8.begin(), m8.end(), Show);
    cout << endl;

    vector<double> sum(6);
    transform(gr8.begin(), gr8.end(), m8.begin(), sum.begin(), plus<double>());
    cout << "sum:\t";
    for_each(sum.begin(), sum.end(), Show);
    cout << endl;

    vector<double> prod(6);
    transform(gr8.begin(), gr8.end(), prod.begin(), bind1st(multiplies<double>(), 2.5));
    cout << "prod:\t";
    for_each(prod.begin(), prod.end(), Show);
    cout << endl;
    return 0;
}

void Show(double v)
{
    std::cout.width(6);
    std::cout << v << ' ';
}