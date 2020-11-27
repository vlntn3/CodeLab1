#include <iostream>
using namespace std;

int main()
{
	{ // part 1 -- print alphabet
		char ltrA[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
		// declaring

		for (int num = 0; num <= 25; num++) 
			cout << ltrA[num] << endl; // prints a-z

		for (int num = 13; num <= 25; num++)
			cout << ltrA[num] << endl; // prints n-z
	}
	{ // part 2 -- odd number reversed
		int oddA[5] = { 1, 3, 5, 7, 9 };

		for (int num = 4; num >= 0; num--)
			cout << oddA[num] << endl; // prints in reversed
	}
	{ // part 3 -- integers in reverse order
		int numA[5] = { 1, 3, 5, 7, 9 };

		for (int num = 4; num <= 0; num--)
			cout << numA[num] << endl; // prints last to first value
	}
	{ // part 4 -- average of integers
		int i, n; // declaring
		double sum = 0.0, avg; // double -- average value MIGHT be in decimal
		double numA[] = { 10, 15, 25, 35, 50, 75 };
		n = sizeof(numA) / sizeof(numA[0]);

		for (i = 0; i < n; i++)
			sum += numA[i]; // formula to get average value
		avg = sum / n;

		cout << "Average value: " << avg << endl; // prints average value
	}
	{ // part 5 -- average temperature
		int i, n; // declaring
		double sum = 0.0, avg; // double -- average value MIGHT be in decimal
		double numA[] = { 7.5, 6.3, 10.0, 6.5, 9.1, 11.5, 10.3 };
		n = sizeof(numA) / sizeof(numA[0]);

		for (i = 0; i < n; i++)
			sum += numA[i]; // formula to get average value
		avg = sum / n;

		cout << "Average value: " << avg << endl; // prints average value
	}
	{ // part 6 -- highest value
		double numA[7] = { 6.5, 1.3, 10.9, 7.5, 8.1, 9.9, 9.3 }; // declaring

		for (int num = 1; num < 7; num++)
		{ 
			if (numA[0] < numA[num]) // compares to every value
				numA[0] = numA[num];
		}
			cout << "Highest value: " << (numA[0]) << endl; // prints highest value

	}
	{ // part 7 -- lowest value
		int numA[7] = { 10, 88, 4, 21, 345, 99, 17 }; // declaring

		for (int num = 1; num < 7; num++)
		{
			if (numA[0] > numA[num]) // compare
				numA[0] = numA[num];
		}
		cout << "Lowest value: " << (numA[0]) << endl; // prints lowest value
	}
	{ // part 8 -- 1-100 odd numbers
		int numA[100]; // declaring
		
		for (int n = 0; n < 100; n++)
		{
			numA[n] = n; // 1 - 100

			if ((numA[n] % 2) == 1) // divides it to 2. if remainder is = 1 it is odd number
				cout << "odd number: " << numA[n] << endl; // prints odd number
		}
	}
	return 0;
}