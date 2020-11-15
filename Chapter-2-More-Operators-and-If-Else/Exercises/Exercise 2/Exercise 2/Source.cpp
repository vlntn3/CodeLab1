#include <iostream>
using namespace std;

int main()
{
    int age; //declare and initialise age variable
    cout << "Age: ";
    cin >> age; // user input

        if (age >= 18) 
        { //check if age is greater than or equal to 18
            cout << "You can vote!" << endl; //output can vote message
        }
        else 
        { //age must be less that 18
            cout << "You can't vote" << endl; //output can vote message
        }
    cin.get(); //keeps console window open on Visual Studio
    return 0;
}