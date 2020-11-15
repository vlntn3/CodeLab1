#include <iostream>
using namespace std;

int main()
{
    cout << "Would you like to continue? (Y/N): "; //ask for input
    char inp; //variable for user answer;
    cin >> inp;//get user input

        switch (inp) 
        { //evaluate expression
        case 'Y': //case for Y
            cout << "Continuing..." << endl; //cout message if user enters Y
            break; //break to end case
        case 'N': //case for N
            cout << "Quitting..." << endl; //cout message if user enters N
                break;
        default: //default case
            cout << "Invalid input" << endl; //default message if neither Y or N entered
        }
    return 0;
}