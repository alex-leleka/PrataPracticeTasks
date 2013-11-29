#include <iostream>
#include <cstring>

int main3()
{
	const int Max_size = 20;
	using namespace std;
	cout << "Enter your first name: ";
	char str_fname[Max_size];
	cin.getline(str_fname, Max_size);
	cout << "Enter your last name: ";
	char str_lname[Max_size];
	cin.getline(str_lname, Max_size);
	// max size of result is 19 + 19 + 2 = 40 and +1 for ending zero
	char str_full_name[Max_size*2 + 1];
	const char * str_delim = ", ";
	strcpy(str_full_name, str_lname);
	strcpy(&str_full_name[strlen(str_full_name)], str_delim);
	strcpy(&str_full_name[strlen(str_full_name)], str_fname);
	cout << "Here's information in a single string: " << str_full_name;
	return 0;
}
