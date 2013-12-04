#include <iostream>

int main4()
{
	using namespace std;
	const int Investion_amout = 100;
	const double Simple_percents = 0.1, Complecated_percents = 0.05;
	double Cleo_balance = Investion_amout, Dafna_balance = Investion_amout;
	int year_counter = 0;
	do
	{
		Dafna_balance += Investion_amout * Simple_percents;
		Cleo_balance += Cleo_balance * Complecated_percents;
		cout << "Balance at the end of " << year_counter++ << "year" << endl;
		cout << "Cleo: $" << Cleo_balance << endl;
		cout << "Dafna: $" << Dafna_balance << endl;
	} while (Cleo_balance <= Dafna_balance);
	cout << "After " << year_counter << " years Cleo balance will be more than Dafna balance.";
	return 0;
}
