#include <iostream>
using namespace std;

int main()
{
	double mt; // declaring
	cout << "Magnitude: ";
	cin >> mt; // user input
	cout << "Descriptor: ";

	if (mt < 2.0)
		cout << "Micro" << endl;
	else if (mt >= 2.0 && mt < 3.0)
		cout << "Very Minor" << endl;
	else if (mt >= 3.0 && mt < 4.0)
		cout << "Minor" << endl;
	else if (mt >= 4.0 && mt < 5.0)
		cout << "Light" << endl;
	else if (mt >= 5.0 && mt < 6.0)
		cout << "Moderate" << endl;
	else if (mt >= 6.0 && mt < 7.0)
		cout << "Strong" << endl;
	else if (mt >= 7.0 && mt < 8.0)
		cout << "Major" << endl;
	else if (mt >= 8.0 && mt < 10.0)
		cout << "Great" << endl;
	else if (mt >= 10.0)
		cout << "Meteoric" << endl;

	return 0;
}