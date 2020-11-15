#include <iostream>
using namespace std;

int main()
{
	char fuel; // declaring
	cout << "P: Petrol\nD: Diesel\nFuel type: "; // user options
	cin >> fuel; // to allow user to enter any character

	switch (fuel)
	{
	case 'P': // case p or P
	case 'p':
		cout << "Petrol selected." << endl;
		break;
	case 'D': // case D or d
	case 'd':
		cout << "Diesel selected." << endl;
		break;
	default: // if input is not p or d
		cout << "Invalid input" << endl;
	}

	double litre; // declaring
	cout << "Litres needed: ";
	cin >> litre; // user input litres
	cout << "Charge: " << litre * 2.19 << " AED" << endl; // 2.19aed is the price per litre

	return 0;
}