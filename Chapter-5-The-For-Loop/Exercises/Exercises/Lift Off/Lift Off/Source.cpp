#include <iostream>
using namespace std;

int main()
{
	for (int Cdown = 10; Cdown >= 0; Cdown--)
	{
		if (Cdown == 0)
		{
			cout << "We have to lift off!" << endl;
		}
		else
		{
			cout << Cdown << endl;
		}
	}

	return 0;
}