#include <iostream>
using namespace std;

int main()
{
	int ages[] = {19, 23, 22, 30, 18};
	cout << ages[4] << endl; 
	// ages[5] is not assigned in the array, because the count starts at 0 so the last value is array[4]
}