#include <iostream>

int main5()
{
	using namespace std;
	const int Months_in_year = 12;
	char * months_names[Months_in_year] {"January" , "February", "March", "April", "May", "June", \
		"July", "August", "September", "October", "November", "December"};

	unsigned int books_sold[Months_in_year];
	for(int i = 0; i < Months_in_year; i++)
	{
		cout << "Enter amount of sold books in " << months_names[i] << ":"<< endl;
		cin >> books_sold[i];
	}
	int books_sold_number = 0;
	for(int i = 0; i < Months_in_year; i++)
	{
		books_sold_number += books_sold[i];
	}
	cout << books_sold_number << " books sold for a year";
	return 0;
}
