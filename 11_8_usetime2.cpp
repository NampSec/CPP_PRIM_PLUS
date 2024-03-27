#include <iostream>
#include "11_8_mytime2.h"

int main()
{
    using std::cout;
    using std::endl;

    Time waxtime(3, 35);
    Time wedtime(2, 48);
    Time total;
    Time diff;
    Time mult;

    cout << "waxtime = "; waxtime.Show(); cout << endl;
    cout << "wedtime = "; wedtime.Show(); cout << endl;
    total = waxtime + wedtime;
    cout << "total = "; total.Show(); cout << endl;
    diff = waxtime - wedtime;
    cout << "diff = "; diff.Show(); cout << endl;
    mult = waxtime * 1.5;
    cout << "mult = "; mult.Show(); cout << endl;
    return 0;
}