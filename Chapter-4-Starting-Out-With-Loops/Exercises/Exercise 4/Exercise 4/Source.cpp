#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string code = "abc123"; // correct code
    string input;
    int attempt = 5; // attempts
    cout << "Enter code: ";
    cin >> input; // user input
    attempt--;

    while (true)
    {
        if (input == code)
        {
            cout << "Access Granted" << endl;
            break; // loop breaks if code is correct
        }
        else
        {
            cout << "Access Denied.\n\nYou have " << attempt << " attempt/s remaining.\nEnter code: ";
            attempt--; // attempt decrements by 1
            cin >> input; // user re-inputs until it reach 0 or inputs valid code
            if (input != code && attempt == 0) // attempts reached 0 without guessing the correct code
            {
                cout << "Access Denied. Authorities have alerted!" << endl;
                break;
            }
        }
    } 

    return 0;
}