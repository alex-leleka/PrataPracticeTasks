#include <iostream>

int main10()
{
	using namespace std;
	const char dot = '.';
	const char star = '*';
	cout << "Enter lines number: ";
	int lines_number;
	cin >> lines_number;
	for(int i = 1; i <= lines_number; i++)
	{
		for(int j = 0; j < lines_number - i; j++)
			cout << dot;
		for(int j = 0; j < i; j++)
			cout << star;
		cout << endl;
	}
	return 0;
}
