#include <iostream>
#include <cstring>
int main8()
{
	using namespace std;
	const char * exit_word = "done";
	cout << "Enter words (write \""<< exit_word << "\" for exit)" << endl;
	const int Word_max_size = 40;
	char word[Word_max_size];
	int words_counter = -1;
	do
	{
		++words_counter;
		cin >> word;
	} while (strcmp(word, exit_word));
	cout << "You entered " << words_counter << " words";
	return 0;
}
