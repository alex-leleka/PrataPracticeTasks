#include <iostream>

using namespace std;

int main3()
{
	int latitude_in_degrees, latitude_in_minutes, latitude_in_seconds;

	cout << "Enter a latitude in degrees, minutes, seconds:" << endl;
	cout << "First, enter the degrees : ";
	cin >> latitude_in_degrees;
	cout << "Next, enter the minutes of arc : ";
	cin >> latitude_in_minutes;
	cout << "Finally , enter the seconds of arc : ";
	cin >> latitude_in_seconds;

	const float Minutes_in_degree = 60, Seconds_in_minute = 60;
	double latitude_in_decimal = latitude_in_degrees + \
			(latitude_in_minutes + latitude_in_seconds / Seconds_in_minute) / Minutes_in_degree;
	cout << latitude_in_degrees << " degrees " << latitude_in_minutes << " minutes " << \
			latitude_in_seconds << " seconds = " << latitude_in_decimal << "degrees";
	return 0;
}
