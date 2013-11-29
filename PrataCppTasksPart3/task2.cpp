#include <iostream>
#include <string>

int main2()
{
	using namespace std;

	cout << "Enter your name:\n";
	string str_name;
	getline (cin, str_name);
	cout << "Enter your favorite dessert:\n";
	string str_dessert;
	getline (cin, str_dessert);
	cout << "I have some delicious " << str_dessert;
	cout << " for you, " << str_name << ".\n";
	return 0;
}
