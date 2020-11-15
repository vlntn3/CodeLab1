#include <iostream>
#include <string>
using namespace std;

int main()
{
	string vehicle[5] = { "Car", "Train", "Tractor", "Skiff", "Tank" }; // declaring
	cout << "Index 3: " << vehicle[3] << endl; // 4th string -- Skiff (count starts at 0)
	cout << "Index 0: " << vehicle[0] << endl; // 1st string -- Car
	cout << vehicle[2] << " " << vehicle[4] << endl; // 3rd and 5th string
	cout << vehicle[0] << " " << vehicle[3] << " " << vehicle[1] << endl; // 1st, 4th and 2nd string
}