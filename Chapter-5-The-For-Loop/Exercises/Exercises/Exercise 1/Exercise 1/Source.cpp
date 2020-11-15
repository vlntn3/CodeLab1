#include <iostream>
using namespace std;

int main()
{
	for (int a = 0; a <= 50; a++)
	{ // counts up from 0 to 50 in increments of 1.
		cout << a << endl;
	}
	for (int b = 50; b <= 0; b--)
	{ // counts down from 50 to 0 in decrements of 1.
		cout << b << endl;
	}
	for (int c = 30; c <= 50; c++)
	{ // counts up from 30 to 50 in increments of 1.
		cout << c << endl;
	}
	for (int d = 50; d <= 10; d -= 2)
	{ // counts down from 50 to 10 in decrements of 2.
		cout << d << endl;
	}
	for (int e = 110; e <= 200; e +=  5)
	{ // counts up from 100 to 200 in increments of 5.
		cout << e << endl;
	}
	return 0;
}