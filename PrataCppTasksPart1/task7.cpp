#include <iostream>

using namespace std;

void printTime(int, int);

int main7()
{
	// lesson 1 task 7
	int hours, minutes;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	printTime(hours, minutes);
	return 0;
}

void printTime(int h, int m)
{
	cout << "Time: " << h << ":" << m << endl;
}
