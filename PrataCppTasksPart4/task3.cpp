#include <iostream>

int main3()
{
	using namespace std;
	int sum = 0, number;
	cout << "Enter integer numbers (enter zero to stop program)" << endl;
	do
	{
		cin >> number;
		sum+=number;
		cout << "Sum of entered numbers = " << sum << endl;
	} while (number);
	return 0;
}
