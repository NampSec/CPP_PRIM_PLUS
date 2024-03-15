#include <iostream>

int main(void)
{
    using namespace std;

    double daphne = 100, cleo = 100;
    int year = 0;
    while(cleo <= daphne)
    {
        daphne += 100 * 0.10;
        cleo += cleo * 0.05;
        ++year;
    }
    cout << "in " << year << " years, Cleo will rich than Daphne." << endl;
    cout << "Cleo: " << cleo << ", " << "Daphne: " << daphne << endl;
    return 0;
}