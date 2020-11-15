#include <iostream>
using namespace std;

int main()
{
	cout << "A girl heads to a computer shop to buy some USB sticks. She loves USB sticks and wants as many as she can get for 50 pounds. They are 6 pounds each" << endl;
	int USB = 6;
	int pounds = 50;
	int tUSB = pounds / USB; // to make codes shorter (tUSB becomes the quotient)

	cout << "Total USB affordable: " << tUSB << endl; // tUSB or pounds divided by USB
	cout << "Pounds left: " << pounds - tUSB * USB << endl; // pemdas is applied to get the answer

	return 0;
}