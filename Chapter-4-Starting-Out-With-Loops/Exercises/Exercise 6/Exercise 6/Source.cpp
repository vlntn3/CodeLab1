#include <iostream>
using namespace std;

int main()
{
	int num = 5; // declaring
	int input;
	int attempt = 0;
	cout << "Please enter any number other than 5: ";
	cin >> input; // user input
	attempt++; // attempt + 1

	while (true)
	{
		if (input == num) // if user inputs 5
		{
			cout << "Hey! you weren't supposed to enter 5!" << endl;
			break;
		}
		else // if user does not input 5
		{
			cout << "Please enter any number other than 5: ";
			attempt++; // attempt + 1
			cin >> input; // user re enter
			if (input != num && attempt == 10) // if user attempts 10 times
			{
				cout << "Wow, you're more patient than I am, you win." << endl;
				break;
			}
		}
	}
	return 0;
}