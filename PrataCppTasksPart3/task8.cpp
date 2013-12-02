#include <iostream>

const int Name_max_size = 40;
struct PizzaInfo
{
	char company_name[Name_max_size];
	unsigned int diameter;
	float weight;
};
int main8()
{
	using namespace std;
	PizzaInfo * some_pizza = new PizzaInfo;
	cout << "Enter diameter: ";
	cin >> some_pizza->diameter;
	cin.get();
	cout << "Enter company name: ";
	cin.getline(some_pizza->company_name, Name_max_size);
	cout << "Enter weight: ";
	cin >> some_pizza->weight;
	cout << "Information about pizza" << endl;
	cout << "Company name: " << some_pizza->company_name << endl;
	cout << "Enter diameter: " << some_pizza->diameter << endl;
	cout << "Enter weight: " << some_pizza->weight << endl;
	return 0;
}
