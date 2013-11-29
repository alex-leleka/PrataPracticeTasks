#include <iostream>

using namespace std;

int main6()
{
	cout << "Enter the distance in kilometers: ";
	int distance_km;
	cin >> distance_km;
	cout << "Enter the volume of consumed gasoline in liters: ";
	int volume_liters;
	cin >> volume_liters;
	const int Dist_km = 100;
	cout << "Petrol consumption is "<< float (Dist_km) * volume_liters / distance_km << " l/"\
			<< Dist_km << "km" << endl;
	return 0;
}
