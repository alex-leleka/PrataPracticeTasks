#include <iostream>

int main10()
{
	using namespace std;
	const int Array_size = 3;
	cout << "Please, enter three results of 40 yards sprint running:" << endl;
	//array<float, Array_size> not available
	float * results = new float[Array_size];
	cout << "1st result :";
	cin >> results[0];
	cout << "2nd result :";
	cin >> results[1];
	cout << "3rd result :";
	cin >> results[2];
	cout << "There are all results:" << endl;
	cout << results[0] << ", " << results[1] << ", " << results[2] << endl;
	cout << "Average : " << (results[0] + results[1] + results[2])/ Array_size;
	return 0;
}
