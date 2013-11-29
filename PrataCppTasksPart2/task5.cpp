#include <iostream>

using namespace std;

int main5()
{
	cout << "Enter the world's population: ";
	long long worlds_population;
	cin >> worlds_population;
	cout << "Enter the population of US: ";
	long long us_population;
	cin >> us_population;
	cout << "The population of the US is "<< 100.0 * us_population / worlds_population \
			<< "% of the world population" << endl;
	return 0;
}
