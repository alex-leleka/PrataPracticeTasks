#include <iostream>
#include <string>

struct CandyBar
{
	std::string name;
	float weight;
	unsigned int calories;
};
int main5()
{
	using namespace std;
	CandyBar snack {"Mocha Munch", 2.3F, 350};
	cout << "I have snack." << endl;
	cout << "name: " << snack.name << endl;
	cout << "weight: " << snack.weight << endl;
	cout << "calories: " << snack.calories << endl;

	return 0;
}
