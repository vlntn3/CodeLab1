#include <iostream>
using namespace std;

int main()
{
	int month; // declaring
	cout << "1: January\n2: February\n3: March\n4: April\n5: May\n6: June\n7: July\n8: August\n9: September\n10: October\n11: November\n12: December" << endl; // user options
	cout << "Pick a Month: ";
	cin >> month; // user input

	switch (month)
	{
	case 1: // january
		cout << "There are 31 Days in this month" << endl;
		break;
	case 2: // february
		cout << "There 28 Days in this month" << endl;
		break;
	case 3: // march
		cout << "There are 31 Days in this month" << endl;
		break;
	case 4: // april
		cout << "There are 30 Days in this month" << endl;
		break;
	case 5: // may
		cout << "There are 31 Days in this month" << endl;
		break;
	case 6: // june
		cout << "There are 30 Days in this month" << endl;
		break;
	case 7: // july
		cout << "There are 31 Days in this month" << endl;
		break;
	case 8: // august			
		cout << "There are 31 Days in this month" << endl;
		break;
	case 9: // september
		cout << "There are 30 Days in this month" << endl;
		break;
	case 10: // october
		cout << "There are 31 Days in this month" << endl;
		break;
	case 11: // november
		cout << "There are 30 Days in this month" << endl;
		break;
	case 12: // december
		cout << "There are 31 Days in this month" << endl;
		break;
	}
	return 0;
}