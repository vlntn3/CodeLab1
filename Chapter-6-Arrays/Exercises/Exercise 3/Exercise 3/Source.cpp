#include <iostream>
#include <string>
using namespace std;

int main()
{
	{ // number
		int num[] = {1, 2, 3, 4, 5, 6, 7, 8 }; // declaring
		int numsize = sizeof(num) / sizeof(num[0]); // formula to get array value
		
		cout << "size of 1st array: " << numsize << endl; // prints array value
	}

	{ // greeting
		string grt[] = {"Hello", "Bye"}; // declaring
		int grtsize = sizeof(grt) / sizeof(grt[0]); // formula

		cout << "size of 2nd array: " << grtsize << endl; // print
	}

	{ // letter
		char ltr[] = { 'A', 'B', 'C' }; // declaring
		int ltrsize = sizeof(ltr) / sizeof(ltr[0]); // formula

		cout << "size of 3rd array: " << ltrsize << endl; // print
	}
	return 0;
}