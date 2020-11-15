#include <iostream>
using namespace std;

int main()
{
	int grd; // declaring
	cout << "Enter your grade: ";
	cin >> grd; // user input

	if (grd >= 0 && grd <= 100) // 0-100 only
	{
		if (grd >= 70 && grd <= 100) // 70-100
		{
			cout << "you got an A grade" << endl;
		}
		else if (grd >= 60 && grd <= 69) // 60-69
		{
			cout << "you got a B grade" << endl;
		}
		else if (grd >= 50 && grd <= 59) // 50-59
		{
			cout << "you got a C grade" << endl;
		}
		else if (grd >= 40 && grd <= 49) // 40-49
		{
			cout << "you got a D grade" << endl;
		}
		else if (grd >= 0 && grd < 40) // 0-39
		{
			cout << "you got an F grade" << endl;
		}
	}
	else // if the valus is not 0-100
		cout << "the value entered is invalid" << endl;
	return 0;
}