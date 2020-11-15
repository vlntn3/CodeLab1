#include <iostream>
#include <string> // allows string to be used
using namespace std;

int main()
{
	{ // part 1
		string n = "John Valentine Tan Lancin"; // declaring
		string a = "17";
		string ht = "Manila, Philippines";

		cout << "Name: " << n << "\n" << "Age: " << a << "\n" << "Hometown: " << ht << "\n" << endl; // "\n" is applied to line break
	}
	{ // part 2
		{
			char n[30]; // 30 maximum character
			printf("Name: ");
			fgets(n, 30, stdin); // stdin to allow user to enter their name
		}
		{
			char ht[50];
			printf("Hometown: ");
			fgets(ht, 50, stdin);
		}
			return 0;
	}

}