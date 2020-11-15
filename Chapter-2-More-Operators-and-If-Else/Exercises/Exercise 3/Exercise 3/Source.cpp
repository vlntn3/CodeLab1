#include <iostream>
using namespace std;

int main()
{
	int money; // declaring
	cout << "How much money you got? ";
	cin >> money; // user input

	if (money >= 25) // 25 or more
	{
		cout << "Buy computer game" << endl;
		cout << "Cash left: " << money - 25 << endl; // subtracts the value of the "money" to 25
	}
	else if (money >= 0 && money <= 24) // less than 25
	{
		cout << "I need to save up more cash!" << endl;
		cout << "Cash needed: " << 25 - money << endl; // subtracts 25 to "money" to get the cash needed
	}
	return 0;
}