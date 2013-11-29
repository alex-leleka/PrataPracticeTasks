#include <iostream>

using namespace std;

int main4()
{
	long long seconds_number;
	cout << "Enter the number seconds: ";
	cin >> seconds_number;

	const int Hours_in_day = 24, Minutes_in_hour = 60, Seconds_in_minute = 60;
	int seconds = seconds_number % Seconds_in_minute;
	long long time_rest = seconds_number - seconds;
	time_rest /= Seconds_in_minute;
	int minutes = time_rest % Minutes_in_hour;
	time_rest -= minutes;
	time_rest /= Minutes_in_hour;
	int hours = time_rest % Hours_in_day;
	time_rest -= hours;
	time_rest /= Hours_in_day;
	long long days = time_rest;
	cout << seconds_number << " seconds = " << days << " days " << hours << " hours " << \
			minutes << " minutes " << seconds << " seconds" << endl;
	return 0;
}
