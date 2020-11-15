#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string code = "abc123";
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
            break;
        }
        else
        {
            cout << "Access Denied.\n\nYou have " << attempt << " attempt/s remaining.\nEnter code: ";
            attempt--;
            cin >> input;
            if (input != code && attempt == 0)
            {
                cout << "Access Denied. Authorities have alerted!" << endl;
                break;
            }
        }
    } 

    return 0;
}