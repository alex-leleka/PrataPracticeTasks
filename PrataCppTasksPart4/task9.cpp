#include <iostream>
#include <string>
int main9()
{
	using namespace std;
	const string exit_word = "done";
	cout << "Enter words (write \""<< exit_word << "\" for exit)" << endl;
	string word;
	int words_counter = -1;
	do
	{
		++words_counter;
		cin >> word;
	} while (word != exit_word);
	cout << "You entered " << words_counter << " words";
	return 0;
}
