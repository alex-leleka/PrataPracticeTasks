#include <iostream>

int main6()
{
	using namespace std;
	const int Month_in_year {12};
	char * month_names[Month_in_year] {"January" , "February", "March", "April", "May", "June", \
		"July", "August", "September", "October", "November", "December"};
	const int Years_number = 3;
	unsigned int books_sold[Years_number][Month_in_year];
	for(int j = 0; j < Years_number; j++)
		for(int i = 0; i < Month_in_year; i++)
		{
			cout << "Enter amount of sold books in " << month_names[i] << " for a " \
					<< "year #" << j+1 <<":"<< endl;
			cin >> books_sold[j][i];
		}
	int books_sold_number[Years_number] {0, 0, 0};
	int books_sold_number_all_years = 0;
	for(int j = 0; j < Years_number; j++)
	{
		for(int i = 0; i < Month_in_year; i++)
		{
			books_sold_number[j] += books_sold[j][i];
		}
		books_sold_number_all_years += books_sold_number[j];
	}
	for(int j = 0; j < Years_number; j++)
	{
		cout << books_sold_number[j] << " books sold for a year #" << j+1 << endl;
	}
	cout << books_sold_number_all_years << " books sold for a " << Years_number << " years." << endl;
	return 0;
}
