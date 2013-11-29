#include <iostream>

using namespace std;


int main6()
{
	// lesson 1 task 6
	const int ASTR_UNITS_IN_LIGHT_YEAR = 63240;
	cout << "Enter the number of light years: ";
	float light_years;
	cin >> light_years;
	cout << light_years << " light years = " << light_years * ASTR_UNITS_IN_LIGHT_YEAR << \
			" astronomical units." << endl;
	return 0;
}
