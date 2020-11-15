#include <iostream>
using namespace std;

int main()
{
	int wt; // declaring waiting time
	cout << "Minutes until arrival: ";
	cin >> wt; // user enter time waiting
	int cash; // declaring cash

	if (wt >= 15) // if waiting time is 15 or more minutes
	{
		cout << "Pounds available: ";
		cin >> cash; // only if there are 15 minutes or more

		if (cash > 3) // if cash is more than 3
			cout << "Go buy a coffee" << endl;
		else // if cash is equal or less then 3
			cout << "Go for a walk around town" << endl;
	}
	else // if time is less than 15
		cout << "Sit in the park and wait" << endl;

	return 0;
}