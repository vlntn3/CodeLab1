#include <iostream>
using namespace std;

int main()
{
	cout << "value of A: ";
	int vA;
	cin >> vA;
	cout << "value of B: ";
	int vB;
	cin >> vB;
	cout << "value of C: ";
	int vC;
	cin >> vC;
	// makes the user enter their own values

	if (vA > vB)
	{
		if (vA > vC)
		{
			cout << "A is the largest value" << endl;
		}
		else if (vA == vC)
		{
			cout << "A and C are the largest value" << endl;
		}
	}
	if (vC > vA)
	{
		if (vC > vB)
		{
			cout << "C is the largest value" << endl;
		}
		else if (vC == vB)
		{
			cout << "B and C are the largest value" << endl;
		}
	}
	if (vB > vC)
	{
		if (vB > vA)
		{
			cout << "B is the largest value" << endl;
		}
	}
	if (vA > vC)
	{
		if (vA == vB)
		{
			cout << "A and B are the largest value" << endl;
		}
	}
	if (vA == vB && vB == vC)
	{
		cout << "all values are equal" << endl;
	}
}