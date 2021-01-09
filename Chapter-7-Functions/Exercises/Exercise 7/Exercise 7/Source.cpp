#include <iostream>
using namespace std;

void max_two(int num1, int num2)
{
	if (num1 > num2) // if 1st more than 2nd
	{
		cout << "1st number is higher: " << num1 << endl; // displays the 1st
	}
	else // if 2nd more than 1st
	{
		cout << "2nd number is higher: " << num2 << endl; // displays the 2nd
	}
}
int main()
{
	int n1, n2; // declaring
	cout << "Enter 2 integer numbers: " << endl; // asks
	cin >> n1 >> n2; // user input

	max_two(n1, n2);
	
	return 0;
}