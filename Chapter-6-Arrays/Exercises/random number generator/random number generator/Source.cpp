#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL)); // randomize
	int num[1000]; // declaring
	int six = 0;

	for (int i = 0; i < 1000; i++)
	{
		num[i] = rand() % 100 + 1; // limit of the value - 100

		if (num[i] == 6) // if number has 6
		{
			six++; // six count increments by 1
		}
	}
	cout << "Numbers with six: " << six << endl; // prints total amount of number with six

	return 0;
}
