#include <iostream>
using namespace std;

int main()
{
	bool myBday = true;
	int age = 17;
	// current age

	if (myBday == true)
	{
		age++; // if it is birthday it adds 1 to the current age
		cout << "it is my birthday. I am " << age << " years old";
	}
	else
	{
		cout << "it is not my birthday" << endl;
	}
}