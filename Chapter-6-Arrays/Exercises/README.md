# Chapter 6 Exercises

Exercises with a tick mark :ballot_box_with_check: represent exercises that must be submitted as part of your Programming Skills Portfolio as a minimum expectation. Completing more exercises provides the opportunity to attain higher marks. For each exercise you should create a _**new project**_ with the name of the exercise and save it to this exercises folder in your local repository.

Once you have completed your solution you should make sure you commit and push your solutions to your remote repository on GitHub. You can commit and push as many changes to your solutions as you wish, only those pushed before the chapter deadlines will be marked for the Programming Skills Portfolio.  

---
&nbsp;

## Exercise 1: Declare and initialise :ballot_box_with_check:


1)    Declare the following arrays using the correct data type and array size:

* array of characters with 26 elements
* array of integers with 10 elements
* array of strings with 4 elements
* array of decimal numbers with 18 elements

2)    Declare and initialise arrays to hold the following information. Don’t use the shorthand method just yet

* 1,2,3,4,5,6,7,8
* “Hello”, “Bye”
* ‘A’, ‘B’, ‘C’
* 1.0, 2.0, 3.0, 4.0, 5.0
* 10, 20, 30, 40, 50, 60

3)    Use the shorthand method to declare and initialise arrays to hold the following information:

* “”, “a”, “aa”, “aaa”
* 1,10,100,1000,10000
* true, false, false, true
* 5.6, 1.8, 4.34, 7.65

&nbsp;
&nbsp;

## Exercise 2: Print value at index :ballot_box_with_check:

Consider the following list of vehicles: *“Car”, “Train”, “Tractor”, “Skiff”, “Tank”*. Declare and initialise an array called vehicles using these values then complete the following tasks:

* Print index 3 to console
* Print index 0 to console
* Print “Tractor Tank” to console using array indexes
* Print “Car Skiff Train” to console using array indexes

&nbsp;
&nbsp;

## Exercise 3: Array Length

Create a program that outputs the size of arrays containing the following values using the sizeof() method described in chapter 6.

* 1,2,3,4,5,6,7,8
* “Hello”, “Bye”
* ‘A’, ‘B’, ‘C’

&nbsp;
&nbsp;

## Exercise 4: Exceptions

An exception in computing programming is an event that disrupts the normal flow of a program.

Copy this array of five elements into your IDE:

```C+
int ages[] = { 19, 23, 22, 30, 18 };
```

Now try to print the value at index 5:

```C+
cout << ages[5] << endl;
```

What happens? In some IDE’s your console indicates an out of bounds exception, whilst in others you might just get a random value. This is because you are trying to access an index that is beyond the scope of the ages array (e.g. a value doesn’t exist at this position).

Adjust the program so that you successfully print the last value of the array, therefore avoiding the exception.

&nbsp;
&nbsp;

## Exercise 5: Heart alteration

Modify the below heart rates example so the for loop condition limit is calculated by the array length rather than being “hard coded”. Check your solution works by adding or removing values from the array.

*Hint:* Use the ```sizeof()``` method within the conditional check

```C++
int heartRates[] = { 54, 60, 71, 59, 62, 63, 60, 58 };

for (int i = 0; i < 8; i++){
      cout << heartRates[i] << endl;
}
```

&nbsp;
&nbsp;

## Exercise 6: Iterating through arrays :ballot_box_with_check:

Write a program(s) that does the following...

* Uses an array and a for loop to print each letter of the English alphabet.
* Prints only the second half of the alphabet.
* Uses a for loop to print all the elements of the following array in reverse order ```1, 3, 5, 7, 9```.
* Declares the following array of integers ```10, 15, 25, 35, 50, 75``` and uses a for loop and some maths to calculate the average of these values.
* Calculates the average temperature for the past 7 days, these temperatures should be entered by the user. Example temperatures: ```7.5, 6.3, 10.0, 6.5, 9.1, 11.5, 10.3```
* Prints out the highest value of a following array values: ```6.5, 1.3, 10.9, 7.5, 8.1, 9.9, 9.3```
* Prints out the lowest value of a following array values: ```10, 88, 4, 21, 345, 99, 17```
* Assigns all numbers between 0 and 100 to an array using a for loop. Then using another for loop, iterates through the array and print only the odd numbers.

&nbsp;
&nbsp;

## Exercise 7: Working the Array

Write a program that will prompt the user to input ten integer values and store these into an array. Now do the following

* Output all the values in the array after the user has inputted their values
* Print the sum of all values in the array.
* Print the average of the values in the array.

*Extension Problem (Optional)*

* Make the program print the smallest and greatest numbers in the array.
* Output array in ascending, then descending order

&nbsp;
&nbsp;

## Exercise 8: Simple Search

Write a simple search engine that tests if a string is present in a string array. The array you need to declare should be initialised with the following values "Lee" "John", "Sam", "Coral", "Ron", "Jake". The string you are searching for is "Sam"

The program should output all the values in the array then output which position in the array the search term can be found at.

*Extension Problem (Optional)*

Allow the user to enter the string to be searched for.

&nbsp;
&nbsp;

## Exercise 9: Array Counting			
Create an array that can hold ten integers, and fill it with numbers input from the user. Display those values on the screen, and then prompt the user for an integer. Go through the array, and count the number of times the item is found, printing the results.

&nbsp;
&nbsp;

## Exercise 10: New array

Write a program which takes two arrays of 10 integers each, called a and b. c is an array with 20 integers. The program should put into c the result of appending b onto the end of a, so the first 10 integers of c are from array a, the latter 10 are from b. Then the program should print array c.

&nbsp;
&nbsp;

## Exercise 11: Drop it

Create an array holding these numbers: {1, 2, 3, 4, 5, 6}. Write a program that asks for an index and a number. Then it inserts the number at the indicated index of the array, and moves each element after the selected index forward one place (with the last number dropping off the end and disappearing).

&nbsp;
&nbsp;

## Exercise 12: 2D Array

Declare and initialise a 2D array to hold the following 5 x 3 table and then print the values to the console. You should use ```sizeof()``` in the loop conditions.

| <!-- -->    | <!-- -->    | <!-- -->    |
|-------------|-------------|-------------|
| 2 | 4 | 6 |
| 3 | 6 | 9 |
| 4 | 8 | 12 |
| 5 | 10 | 15 |
| 6 | 12 | 18 |

&nbsp;
&nbsp;

## Exercise 13: Fill the 2D Arrays

Declare - but don’t initialise - another 2D array to hold another 5 x 3 table. Fill the arrays using a nested for loop. You should use ```sizeof()``` in the loop conditions.

&nbsp;
&nbsp;

## Exercise 14: Find the Column average

Writes a program to find the average value of each column of a 2D array of type double

&nbsp;
&nbsp;

## Exercise 15: Address Storage

Use a string multidimensional array that will store the names and respective postcodes of 3 or more people. Have the user enter the data then print out the details of each person to the console, e.g.

| Name | Postcode |
|------|----------|
| Bob	 | A59 1LK  |
