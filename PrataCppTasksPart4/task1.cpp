#include <iostream>

int main1()
{
	using namespace std;
	cout << "Enter two integer numbers, the less number must be first." << endl;
	cout << "First number: ";
	int num1;
	cin >> num1;
	cout << "Second number: ";
	int num2;
	cin >> num2;
	int sum = 0;
	for(int i = num1; i <= num2; i++)
		sum += i;
	cout << "Sum of numbers between " << num1 << " and " << num2 << " is " << sum << endl;
	return 0;
}
