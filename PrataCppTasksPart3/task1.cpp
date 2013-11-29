#include <iostream>
#include <string>
using namespace std;

int main1()
{
	cout << "What is your first name? ";
	string str_fname;
	getline (cin, str_fname);
	cout << "What is your last name? ";
	string str_sname;
	getline (cin, str_sname);
	cout << "What letter grade do you deserve? ";
	char c_grade[2];
	cin.getline(c_grade, 2);
	c_grade[0]++;
	cout << "What is your age? ";
	int age;
	cin >> age;
	cout << "Name: " << str_sname << ", " << str_fname << endl;
	cout << "Grade: " << c_grade << endl;
	cout << "Age: " << age;
	return 0;
}
