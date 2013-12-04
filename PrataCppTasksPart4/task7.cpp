#include <iostream>
#include <string>
int main7()
{
	using namespace std;
	struct car{
		string manufacturer_name;
		int model_year;
	};
	cout << "How many cars do you want to add in catalog? ";
	unsigned int cars_number;
	cin >> cars_number;
	cin.get();
	car * cars_catalog = new car[cars_number];
	for(unsigned int i = 0; i < cars_number; i++)
	{
		cout << "Car #" << i+1 << ":" << endl;
		cout << "Enter manufacturer name: ";
		getline(cin, cars_catalog[i].manufacturer_name);
		//cin.get();
		cout << "Enter Model Year: ";
		cin >> cars_catalog[i].model_year;
		cin.get();
	}
	cout << "There are your collection:" << endl;
	for(unsigned int i = 0; i < cars_number; i++)
	{
		cout << "Car #" << i+1 << ":" << endl;
		cout << "Enter manufacturer name: " << endl;
		cout << cars_catalog[i].manufacturer_name << endl;
		cout << "Enter Model Year: " << endl;
		cout << cars_catalog[i].model_year << endl;
	}
	return 0;
}
