#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter age: ";
	cin >> age;

	while (true)
	{
		if (age > 0 && age < 120)
		{
			cout << "Input valid." << endl;
			break;
		}
		else
		{
			cout << "Input invalid.\nEnter age: ";
			cin >> age;
		}
	}
	return 0;
}