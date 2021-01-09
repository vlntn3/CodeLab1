#include <iostream>
using namespace std;

void add(int num1, int num2) // 1: addition
{
	int sum = num1 + num2; // adding
	cout << num1 << " + " << num2 << " = " << sum << endl; // display
}
void subtract(int num1, int num2) // 2: subtraction
{
	int diff = num1 - num2; // subtracting
	cout << num1 << " - " << num2 << " = " << diff << endl; // display
}
void multiply(int num1, int num2) // 3: multiplication
{
	int prod = num1 * num2; // multiplying
	cout << num1 << " x " << num2 << " = " << prod << endl; // display
}
void divide(int num1, int num2) // 4: division
{
	int quo = num1 / num2; // dividing
	cout << num1 << " / " << num2 << " = " << quo << endl; // display
}
int main()
{
	int n1, n2, op; // declaring
	cout << "Pick an operation below:\n------------------------\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n------------------------" << endl;
	cin >> op; // user input operation

	switch (op)
	{
	case 1: // user input 1
		cout << "Enter two integers: " << endl; // asks 2 num
		cin >> n1 >> n2; // input
		add(n1, n2); // (void add)
		break;
	case 2: // user input 2
		cout << "Enter two integers: " << endl; // asks 2 num
		cin >> n1 >> n2; // input
		subtract(n1, n2); // (void subtract)
		break;
	case 3: // user input 3
		cout << "Enter two integers: " << endl; // asks 2 num
		cin >> n1 >> n2; // input
		multiply(n1, n2); // (void multiply)
		break;
	case 4: // user input 4
		cout << "Enter two integers: " << endl; // asks 2 num
		cin >> n1 >> n2; // input
		divide(n1, n2); // (void divide)
		break;
	default: // user input NOT 1-4
		cout << "invalid input" << endl; // diplays invalid
	}
	return 0;
}