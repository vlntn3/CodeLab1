#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "What is the capital of France? " << endl;
	string cap = "Paris"; // declaring
	cin >> cap;

	if (cap == "Paris" || cap == "paris") // the correct answer
	{
		cout << "You are correct" << endl;
	}
	else // if they enter wrong answer or spelling
	{
		cout << "You are wrong" << endl;
	}
	return 0;
}