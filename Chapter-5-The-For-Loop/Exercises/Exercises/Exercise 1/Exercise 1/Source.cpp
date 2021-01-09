#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	for (a = 0; a <= 50; a++)
	{ // counts up from 0 to 50 in increments of 1.
		cout << a << endl;
	}
	for (b = 50; b >= 0; b--)
	{ // counts down from 50 to 0 in decrements of 1.
		cout << b << endl;
	}
	for (c = 30; c <= 50; c++)
	{ // counts up from 30 to 50 in increments of 1.
		cout << c << endl;
	}
	for (d = 50; d <= 10; d = 2)
	{ // counts down from 50 to 10 in decrements of 2.
		cout << d << endl;
	}
	for (e = 110; e <= 200; e +=  5)
	{ // counts up from 100 to 200 in increments of 5.
		cout << e << endl;
	}
	return 0;
}