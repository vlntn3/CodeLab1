#include <iostream>
using namespace std;

void sum(int num1, int num2)
{
	int sum = num1 + num2; // declaring
	cout << "Sum: " << sum; // sum
}

int main()
{
	int a, b; // declaring
	cout << "Enter 1st value: "; // 1st
	cin >> a; // user input 1
	cout << "Enter 2nd value: "; // 2nd
	cin >> b; // user input 2

	sum(a, b); // sum

	return 0;
}