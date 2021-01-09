#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
	array<int, 10> numA;
	cout << "Enter any ten numbers: ";

	for (int i = 0; i < 10; i++)
	{
		cin >> numA[i];
	}

	sort(numA.begin(), numA.end());

	cout << "Lowest to Highest\n------------------" << endl;
	for (int num : numA)
	{
		cout << num << endl;
	}
}