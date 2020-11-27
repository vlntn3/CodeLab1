#include <iostream>
#include <string>
using namespace std;

int main()
{
	{ // part 1 -- declare
		char array[26];
		int array[10];
		string array[4];
		double array[18];
	}
	{ // part 2 -- longhand
		{ // numbers
			int num[8];
			num[0] = 1;
			num[1] = 2;
			num[2] = 3;
			num[3] = 4;
			num[4] = 5;
			num[5] = 6;
			num[6] = 7;
			num[7] = 8;
		}
		{ // Greetings
			string grt[2];
			grt[0] = "Hello";
			grt[1] = "Bye";
		}
		{ // Letters
			char ltr[3];
			ltr[0] = 'A';
			ltr[1] = 'B';
			ltr[2] = 'C';
		}
		{ // Decimals
			double dcml[5];
			dcml[0] = 1.0;
			dcml[1] = 2.0;
			dcml[2] = 3.0;
			dcml[3] = 4.0;
			dcml[4] = 5.0;
		}
		{ // Tens
			int ten[6];
			ten[0] = 10;
			ten[1] = 20;
			ten[2] = 30;
			ten[3] = 40;
			ten[4] = 50;
			ten[5] = 60;
		}
	}
	{ // part 3 -- shorthand
		{ // letter a
			char a[4] = { ' ', 'a', 'aa', 'aaa' };
		}
		{ // 1 -- 10000
			int n[5] = {1, 10, 100, 1000, 10000};
		}
		{ // True -- False
			string tf[4] = {"True", "False", "False", "True"};
		}
		{ // Decimals
			double d[4] = {5.6, 1.8, 4.34, 7.65};
		}
	}
}