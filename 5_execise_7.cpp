#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct car
{
    string make;
    int year;
};


int main(void)
{

    cout << "How many cars do you wish to catalog? ";
    int num_cars;
    cin >> num_cars;
    cout << endl;
    vector<car> cars(num_cars);

    for (int i = 0; i < num_cars; i++)
    {
        cout << "Enter the make of the car: "; // 这里注意因为有空格,这里不采用cin>>string
        cin.get();
        getline(cin, cars[i].make);
        cout << endl;
        cout << "Enter the year of the car: "; // 使用cin>>重定向前会将缓冲区的所有换行给去掉
        cin >> cars[i].year;
        cout << endl;
    }

    for (car enum_car : cars)
        cout << enum_car.make << " " << enum_car.year << endl;

    return 0;
}