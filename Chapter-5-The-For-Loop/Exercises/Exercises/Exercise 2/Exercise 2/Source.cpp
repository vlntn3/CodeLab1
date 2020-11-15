#include <iostream>
using namespace std;

int main()
{
	for (int num = 20; num <= 24; num++) // counts up from 20-24 in increments of 1
		if ((num & 1) == 0) // even number
		{
			cout << num << " - Even" << endl;
		}
		else // odd number
		{
			cout << num << " - Odd" << endl;
		}
	return 0;
}