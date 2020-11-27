#include <iostream>
using namespace std;

int main()
{
    int n, i; // declaring

    cout << "Enter any value: "; // any positive value
    cin >> n; // user inputs

    cout << n << " Times Table:\n----------------" << endl; // shows time table (1-12) of a specific number

    for (i = 1; i <= 12; i++) // the multiplier (second number (multiplies the user input))
        cout << n << " x " << i << " = " << n * i << endl; // prints the formula and the answer

    return 0;
}