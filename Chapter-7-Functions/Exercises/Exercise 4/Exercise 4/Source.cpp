#include <iostream>
#include <string>
using namespace std;

void ng(string grt, string name)
{
	cout << "Name: "; // name
	cin >> name; // name input
	cout << "Greetings: "; // greet
	cin >> grt; // greet input
}

int main()
{
	string n, g; // declaring
	ng(n, g); // (void)
	cout << "Hello User!" << endl; // greet the user

	return 0;
}
