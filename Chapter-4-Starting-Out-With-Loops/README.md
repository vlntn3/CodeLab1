# Chapter 4 - Starting out with loops

* [What is a Loop](#what-is-a-loop)
  * [Why use Loops](#why-use-loops)
* [The While Loop](#the-while-loop)
  * [Back to Counting](#back-to-counting)
  * [Iterations](#iterations)
* [Infinite Loops](#infinite-loops)
* [The Break Statement](#the-break-statement)
* [Do While Loops](#do-while-loops)
* [Basic Error Checking with Loops](#basic-error-checking-with-loops)

## What is a Loop

Loops are used when we want to execute a code statement or several code statements multiple times. We can choose to execute a loop a given number of times, or we can keep looping repeatedly until a certain condition is met.

&nbsp;
&nbsp;

### Why use Loops?

If, for example, we wanted to print all the numbers between 1 and 5 on a new line, we could use cout without too much trouble:

```C++
cout << 1 << endl;
cout << 2 << endl;
cout << 3 << endl;
cout << 4 << endl;
cout << 5 << endl;
```

But imagine that we wanted to print all numbers between 1 and 1000. One thousand cout statements would be incredibly inefficient to programme.

This is where loops come in.

&nbsp;
&nbsp;

## The While Loop

A while loop enables us to loop WHILE a certain condition is true. We can visualise this using the following flow diagram:

<p align="center">
  <img src="https://jakehobbs.co.uk/markdown_images/while-loop.png">
</p>

The while loop has the following features:

* *A Condition:* Like the if-else statement the while loop is driven by a condition. As long as that condition evaluates to TRUE, the loop will continue to run
* *A Code Block:* Statements that will execute if the condition evaluates to TRUE
* *A Loop:* The code block will execute indefinitely until the condition evaluates to FALSE

We can express a while loop in pseudocode like this:

```
while ( condition ) {
	do something;
}
```

&nbsp;
&nbsp;

### Back to Counting

So how then can we write a while loop that counts from 1 - 10000, therefore avoiding the messy scenario described above? First we need to declare a variable that will be used to keep track of the current count. We can call it count. Next we create our loop.

```C++
int count = 1;
while(count <= 1000){
    cout << count << endl;
    count++;
}
```

Note the features of this while loop:

* *The condition:* As long as count is less than or equal to 1000 then the loop will continue to run.
* *Code Block:* This contains two statements. A cout statement that prints to console the current value of count followed by count++, which adds +1 to the value of count each time the loop runs.

The variable count will continue to increment by +1 until it reaches 1001. At that point the condition count <= 1000 will no longer evaluate to TRUE and we exit the loop.

&nbsp;
&nbsp;

### Iterations

An iteration is one cycle of the while loop. So in our counting example there are 1000 iterations.

&nbsp;
&nbsp;

## Infinite Loops

When developing the solution to The Pointless Box, you may have encountered a situation where your loop runs indefinitely. This is called an Infinite Loop.

This happens because the condition of the loop always evaluates to TRUE.

Sometimes this is useful - for example when coding for the web when you often want to always be listening for an input from a web server. However in most occasions, we find that we should work to avoid them.

You therefore need to be careful when designing loops that there is a way for the loop to exit or break.

&nbsp;
&nbsp;

## The Break Statements

The break statement forces the loop to cease iterating. When a break statement is executed within a loop, we ‘jump out’ of the loop and continue with the rest of the programme. We saw the break statement in the last chapter on switch statements where its action is the same; When the program encounters a break In a switch it ‘jumps out’ of the statement and continues with the rest of the programme.

Suppose we want to count up to a given number, however that number is defined by user input. In this case we can’t deploy the solution seen in the previous example Why not? There are two reasons:

* We don’t know what the user’s inputted number is going to be, so setting a condition of e.g. count <= 10000 will likely not stop at the user’s chosen number
* This method will only capture numbers up to 10000. The user’s number may be higher

```C++
//this will not work
int count = 1;
while(count <= 1000){
    cout << count << endl;
    count++;
}
```

One solution to this problem is to use the break statement. It may look something like this:

```C++
cout << "Enter a whole number: " << endl;
int userNum;
cin >> userNum;

int count = 1;
while(true){
   cout << count << endl;
   if(count == userNum){
       break;
   }
   count++;
}
```

The operation is as follows:

* Cin is used to collect the user’s inputted number. This is stored as userNum
* The condition of the while loop is true. This means it will run indefinitely.
* With cout we print the value of our count variable on each iteration.
* We then check to see if our count variable is equal to userNum. If it is we break to loop. Otherwise we increment count and run the iteration again.

&nbsp;
&nbsp;

## Do While loops

The do while loop is a variant of a while loop, which evaluates the condition at the bottom of the loop instead of the top.

This means that the loop will execute at least once, regardless of whether or not the condition evaluates to TRUE or FALSE.

We can express a do while loop in pseudocode like this:

```
do {  
	do something;
} while ( condition );
```

Note here that the code block to be executed still appears within curly braces. Also note the semicolon at the end of the condition.

&nbsp;
&nbsp;

### Example: Game Music

Game music often loops, often because we don’t know how long a player will stay in a particular location. Remember Sonic the Hedgehog (1991)? When you get to the point of fighting Dr Robotnik, boss battle music starts playing. This 30 second sequence will continue to loop until Sonic defeat’s him, or is killed.

A do while loop is a valid mechanism to control audio playback:

```C++
bool battleRobotnik = false;
// at this point Sonic enters the battle arena
do {
   battleRobotnik = true;
   cout << "Play battle music" << endl;
} while (battleRobotnik);
cout << "Stop battle music" << endl;
```

We could improve this implementation by doing two things

* getting rid of redundancies by changing battleRobotnik == true to battleRobotnik
* adding an if statement to exit the loop when the player either dies or defeats Robotnik

```C++
bool battleRobotnik = false;
bool sonicDead = false;
bool robotnikDead = false;
// at this point Sonic enters the battle arena
do {
   battleRobotnik = true;
   cout << "Play battle music" << endl;
   if (sonicDead || robotnikDead) {
       battleRobotnik = false;
   }
} while (battleRobotnik);
cout << "Stop battle music" << endl;
```

&nbsp;
&nbsp;

## Basic Error Checking with loops

```cin.fail()``` is an in built C++ method that offers a great way of doing some simple error checking. The input stream (```cin```), knows what type of data it is expecting when awaiting user input. If a letter is entered when its expecting an int then an error flag will be placed on the input stream and ```cin.fail()``` will evaluate to true. This means you can use ```cin.fail( );``` as the conditional check in an if statement, or even better a while loop to keep checking user input until valid data is entered.

In the code block after the conditional check you then need to clear the error flag ```cin.clear( );``` and ignore what is left in the input stream as the invalid data will still be there. ```cin.ignore(256, '\n');``` tells the input stream to ignore the next 256 characters, or the first new line character it encounters (whichever comes first). As the user will have hit enter when inputting the data it should encounter the new line character first. Now you are safe to ask the user for new data. See the example below:

```C++
cout << "Enter a number: " << endl;
int x;
cin >> x;
while (cin.fail()) {
    cout << "Invalid input" << endl;
    cin.clear();
    cin.ignore(256, '\n');
    cin >> x;
}
cout << "Input number: " << x << endl;
```

Note that the error flag will only occur if the data is of the wrong type (e.g. int when expecting a char, or char when expecting an int. Therefore, cin.fail( ); won’t work for checking if a number is out of range (e.g. 22 when only numbers below 10 are valid). You would need an alternative error checking method for this (e.g. simple if statement check).
