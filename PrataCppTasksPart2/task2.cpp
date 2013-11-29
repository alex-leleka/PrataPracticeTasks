#include <iostream>

using namespace std;

int main2()
{
	int height_in_inches, height_in_foots, mass_in_pounds;

	cout << "Enter your height in foots and inches:" << endl;
	cout << "foots = ";
	cin >> height_in_foots;
	cout << "inches = ";
	cin >> height_in_inches;
	cout << "Enter your weight in pounds : ";
	cin >> mass_in_pounds;

	const int Inches_in_foot = 12;
	const float Meters_in_inch = 0.0254f;
	const float Kgramms_in_pound = 2.2f;
	int height_in_inches_only = height_in_foots * Inches_in_foot + height_in_inches;
	float height_in_meters = height_in_inches_only * Meters_in_inch;
	float mass_in_kg = mass_in_pounds / Kgramms_in_pound;

	cout << "Your BMI is " << mass_in_kg / (height_in_meters * height_in_meters);
	return 0;
}
