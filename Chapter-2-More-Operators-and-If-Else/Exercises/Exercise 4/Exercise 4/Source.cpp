#include <iostream>
using namespace std;

int main()
{
	int num; // declaring
	cout << "Enter any value: ";
	cin >> num; // to allow user enter the value

	if (num % 2 == 0) // if the value is divisible by 2
		cout << "The value is an even number" << endl;
	else // if not
		cout << "The value is an odd number" << endl;
	return 0;
}