#include <iostream>
using namespace std;

int main()
{
    int code; //declaring
    cout << "Enter a 3-digit code: ";
    cin >> code; // user input

    while (code != 246) // if user inputs wrong code
    {
        cout << "Access Denied\nEnter a 3-digit code: ";
        cin >> code; // user re-inputs
    }
    if (code == 246) // if user inputs correct code
        cout << "Access Granted" << endl;

    return 0;
}