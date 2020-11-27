#include <iostream>
#include <string>
using namespace std;

int main()
{
	// declaring
	string star[7] = { "*******", "*******", "*******", "*******", "*******", "*******", "*******" };

	for (int num = 0; num < 7; num++)
		cout << star[num] << endl; // prints *(7) in 7 lines

	return 0;
}