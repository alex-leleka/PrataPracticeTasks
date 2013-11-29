#include <iostream>

using namespace std;

int main1()
{
	int height_in_inches;
	cout << "Enter your height in inches: _";
	cin >> height_in_inches;
	const int Inches_in_foot = 12;
	cout << "Your height is " << height_in_inches / Inches_in_foot << " foots and " \
		<< height_in_inches % Inches_in_foot << " inches.";
	return 0;
}
