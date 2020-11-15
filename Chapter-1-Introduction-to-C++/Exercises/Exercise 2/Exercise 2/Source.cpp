#include <iostream>
using namespace std;

int main() 
{
    double numberOne = 50; // the mistake was it was identied as integer so it would not show decimal
    double numberTwo = 7; // double makes it decimal show when divided
    cout << numberOne / numberTwo << endl; // 50 will be divided by 7

    return 0;
}