#include <iostream>

using namespace std;

int main7()
{
	cout << "Enter the distance in kilometers: ";
	int distance_km;
	cin >> distance_km;
	cout << "Enter the volume of consumed gasoline in liters: ";
	int volume_liters;
	cin >> volume_liters;
	const float Litters_in_gallon = 3.875;
	const float Miles_in_km = 0.6214;
	float volume_gallons = volume_liters / Litters_in_gallon;
	float distance_miles = distance_km * Miles_in_km;
	cout << "Petrol consumption is " << distance_miles / volume_gallons << " miles per gallon";
	return 0;
}
