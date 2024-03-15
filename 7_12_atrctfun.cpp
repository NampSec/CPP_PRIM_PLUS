#include <iostream>
#include <cmath>

struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar p);

int main()
{
    using namespace std;
    rect xypos;
    polar p;

    cout << "Enter x and y coordinates: ";
    cin >> xypos.x >> xypos.y;
    p = rect_to_polar(xypos);
    show_polar(p);
    return 0;
}

