#include <iostream>
#include <string>
using namespace std;

int main()
{
	string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

	for (int m = 0; m < 12; m++)
	{
		cout << months[m] << endl;
	}
	return 0;
}