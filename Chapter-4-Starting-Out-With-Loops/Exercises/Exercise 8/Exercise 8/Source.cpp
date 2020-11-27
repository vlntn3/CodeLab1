#include <iostream>
using namespace std;

int main()
{
	int age; // declaring
	cout << "Enter age: ";
	cin >> age; // user inputs

	while (true)
	{
		if (age > 0 && age < 120)  // ages valid: 1-119
		{
			cout << "Input valid." << endl;
			break; // loop breaks if input is valid
		}
		else
		{
			cout << "Input invalid.\nEnter age: ";
			cin >> age; // user re-inputs until they input valid value
		}
	}
	return 0;
}