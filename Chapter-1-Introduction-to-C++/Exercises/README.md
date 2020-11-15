# Chapter 1 Exercises

Exercises with a tick mark :ballot_box_with_check: represent exercises that must be submitted as part of your Programming Skills Portfolio as a minimum expectation. Completing more exercises provides the opportunity to attain higher marks. For each exercise you should create a _**new project**_ with the name of the exercise and save it to this exercises folder in your local repository.

Once you have completed your solution you should make sure you commit and push your solutions to your remote repository on GitHub. You can commit and push as many changes to your solutions as you wish, only those pushed before the chapter deadlines will be marked for the Programming Skills Portfolio.  

---
&nbsp;

## Exercise 1: Data Types :ballot_box_with_check:

Type out the code below and add the correct data types to complete the variables

```C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    firstNumber = 1;
    iCanCode = true;
    hopefulGrade = 'a';
    myDecimal = 1.0;
    minimalSentance = "y";
    keyMash = 13213123;
    mysteryDataType = 5.6f; //Use Google to work this out

    return 0;
}
```
&nbsp;
&nbsp;
&nbsp;
## Exercise 2: Division Fix :ballot_box_with_check:

This programme doesn’t quite work as expected. Can you provide a simple fix?

```C++
#include <iostream>
using namespace std;

int main() {
    int numberOne = 50;
    int numberTwo = 7;
    cout << numberOne/numberTwo << endl;

    return 0;
}
```
&nbsp;
&nbsp;
&nbsp;
## Exercise 3: Untidy Code :ballot_box_with_check:

Tidy up the code to make it easier to understand

```C++
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "This is untidy code.";

    cout <<                     "I'm surprised it works.";

int   number =   6;
    cout << "It has" <<
        number <<  "lines of code  - "     ;


    cout << "each more hideous than the last.      ";
                cout << "You probably should add some line breaks in the text too" << endl;

    return 0;

}
```
&nbsp;
&nbsp;
&nbsp;
## Exercise 4: St Ives :ballot_box_with_check:

#### Part 1

The idea here is to translate the following famous riddle to C++. Each number in bold needs to be stored in a variable that must be declared and initialised at the beginning of the program. Then you should use output statements to print the riddle to the console.


>*As I was going to St. Ives, I met __1__ man with __7__ wives  
>Each wife had __7__ sacks, each sack had __7__ cats, each cat had __7__ kits  
>Kits, cats, sacks and wives,  
>How many were going to St. Ives?*


#### Part 2

So we know that the answer to this riddle is just 1. The only person going to St. Ives is the narrator. But how many Kits, Cats, Sacks and Wives did the narrator meet?

Use your variables (and perhaps create new ones) to calculate and print the total number of ‘items’ the man met whilst going to St Ives.

Hint: If each wife had 7 sacks, each containing 7 cats, who each had 7 kits, then the following pseudocode expression calculates the number of kits:

```
Total Kits = 7 (wives) x 7 (sacks) x 7 (cats) x 7 (kits)
```

You will have to write similar mathematical expressions to find the total number of ‘items’ met while to St. Ives.

&nbsp;
&nbsp;
&nbsp;

## Exercise 5: USB Shopper :ballot_box_with_check:

A girl heads to a computer shop to buy some USB sticks. She loves USB sticks and wants as many as she can get for £50. They are £6 each.

Write a programme that calculates how many USB sticks she can buy and how many pounds she will have left.

You will to use the arithmetic operators to complete this exercise.

&nbsp;
&nbsp;
&nbsp;

## Simple Sums :ballot_box_with_check:

Set up a new project and follow the below steps:

* Declare a variable with data type integer. Initialise with a value of 8.
* Declare a variable with data type integer. Initialise with a value of 10.
* Declare a third variable of data type integer that sums the answer.
* Print the final variable to console.

&nbsp;
&nbsp;
&nbsp;
## Exercise 6: Biography :ballot_box_with_check:

#### Part 1
Create a program that prints your name, hometown and age to the console. The program has the following constraints:

* Each item should be stored using a variable of an appropriate data type.
* Each item should be printed on a new line.
* You can only use cout once.


#### Part 2
Modify your program such that the computer asks the user for their name and hometown, then stores these in variables (hint: we’ve used cout for output, perhaps there is something similar for input? Also for now only give it your first name). Now use the variables to print the short biography with the values entered by the user.


##### Extension Problem (optional):

Try giving the program both your first and second name when asked. What do you notice? Can you provide a fix? Also when asked to enter you age enter a string value? What happens? Can you fix the problem. (hint: Google is your friend).

&nbsp;
&nbsp;
&nbsp;
## Exercise 7: Temperature

Part 1: Create a program to convert temperature in Fahrenheit to Celsius

*Fahrenheit to celsius → (n - 32) * 0.5556)*

You should make use of variables such that your program prints to console:

```
"X Fahrenheit is Y in Celsius"
```

Where X is the value you specify (as in an appropriate data type) and Y is the calculated result

Part 2: Enhance your program by having the computer ask the user for the temperature in Fahrenheit.

&nbsp;
&nbsp;
&nbsp;
## Exercise 8: Circles

Write a program that calculates (and displays) the area (A) and circumference (C) of a circle given its radius (r). The program should get the radius from the user. Make your code as clear as possible by using variables of appropriate data types and comments.

>*A = π r2  
>C = 2π r*

&nbsp;
&nbsp;
&nbsp;

## Exercise 9: Paint

#### Part 1
Start a new project and add the following code. Complete the missing statements so the program functions

```C++
#include <iostream>
#include <string>
using namespace std;
int main() {
    //consts are variables whose value cannot be modified later
    const int COVERAGE = 350; // paint covers 350 sq ft per gallon
    // declare integers length, width, and height
    // declare double totalSqFt;
    // declare double paintNeeded;
    // prompt for and read in the length of the room
    // prompt for and read in the width of the room
    // prompt for and read in the height of the room
    // Compute the total square feet to be painted - think about   the dimensions of each wall assuming standard four wall room.
    // Compute the amount of paint needed
    // Print the length, width, and height of the room, the total square feet and number of gallons of paint required
    return 0;
}
```

#### Part 2
Suppose the room has doors and windows that don’t need painting. Ask the user to enter the number of doors and number of windows in the room, and adjust the total square feet to be painted accordingly. Assume that each door is 20 square feet and each window is 15 square feet.
