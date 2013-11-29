#include <iostream>
#include <string>

int main4()
{
	using namespace std;
	cout << "Enter your first name: ";
	string str_fname;
	getline(cin, str_fname);
	cout << "Enter your last name: ";
	string str_lname;
	getline(cin, str_lname);
	string str_delim = ", ";
	string str_full_name = str_lname + str_delim + str_fname;
	cout << "Here's information in a single string: " << str_full_name;
	return 0;
}
