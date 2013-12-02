#include <iostream>
#include <string>

struct CandyBar
{
	std::string name;
	float weight;
	unsigned int calories;
};
int main9()
{
	const int Array_size = 3;
	using namespace std;
	CandyBar * candys = new CandyBar[Array_size] {{"Atomic Fireball", 1.55F, 100}, \
		{"Starburst", 4.2F, 321}, {"Pixie Stix", 2.2, 301}};
	cout << "I have something sweet:" << endl;
	for(int i = 0; i < Array_size; i++)
	{
		cout << endl;
		cout << "name: " << candys[i].name << endl;
		cout << "weight: " << candys[i].weight << endl;
		cout << "calories: " << candys[i].calories << endl;
	}

	return 0;
}
