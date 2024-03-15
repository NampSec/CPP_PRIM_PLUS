// BMI caculator
#include <iostream>
int main()
{
	using namespace std;
	const double kg_per_pound = 2.2;
	const double meter_per_inch = 0.0254;
	const int feet_per_inch = 12;

	cout << "Enter your height:" << endl;
	double height_inch;
	double height_feet;
	cout << "inch:____\b\b\b\b";
	cin >> height_inch;
	cout << endl;
	cout << "feet:____\b\b\b\b";
	cin >> height_feet;
	cout << endl;
	double height_meter = (height_feet * feet_per_inch + height_inch) * meter_per_inch;
	cout << "Enter your weight(pound):____\b\b\b\b";
	double weight_pound;
	cin >> weight_pound;
	cout << endl;
	double weight_kg = weight_pound * kg_per_pound;
	double bmi = weight_kg / (height_meter * height_meter);
	cout << "Your BMI is " << bmi << endl;
	return 0;
}
