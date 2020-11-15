#include <iostream>
using namespace std;

int main()
{
	int nman = 1;
	int nwives = 7;
	int nsacks = 7; // int declares it as integer
	int ncats = 7;
	int nkits = 7; // makes number show when the word is mentioned
	
	{ // part 1
		cout << "As I was going to St. Ives, I met " << nman << " man with " << nwives << " wives" << endl; // endl; to end each line
		cout << "Each wife had " << nsacks << " sacks, each sack had " << ncats << " cats, each cat had " << nkits << " kits" << endl;
		cout << "Kits, cats, sacks and wives," << endl;
		cout << "How many were going to St. Ives?" << endl;
	}
	{ // part 2
		cout << "Total Kits = " << nwives * nsacks * ncats * nkits << endl; // multiply to get the total number of kits
	}
	return 0;
}