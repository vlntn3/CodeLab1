# Chapter 1 - Introduction to C++

* [Coding Conventions](#coding-conventions)
* [Variables and Data Types](#variables-and-data-types)
* [Non-Primitive Data Types](#non-primitive-data-types)
* [Input and Output Stream](#input-and-output-stream)
* [Hello World](#hello-world)
* [Operators](#operators)
* [Constant Variables](#constant-variables)

## Coding Conventions

The importance of Coding Conventions is crucial. There is nothing worse in programming then opening up a C++ file (or HTML5 or CSS etc.) and being confronted with the code equivalent of an overturned filing cabinet. Keeping your code neat and tidy not only helps you find your way around, but helps others understand your work when looking for help. Neat code can save you hours when trying to fix errors and its importance should not be underestimated (which is why its part of the marking criteria for the Skills Portfolio and Utility App assessments!). Here are six tips that should help you keep your code organised so you can make sense of it when you return to it at a later date.

### 1 - Program Descriptors

Add a couple of commented lines right at the very top of your programme that describes, in the simplest terms, what the program does.

### 2 - Comments

Beginners should annotate their code with comments to remind them what certain commands do. For example, the first time you type

```C++
cout << "Hello World" << endl;
```

it wouldn’t hurt to place a comment next it that says…

```C++
// This is how you print to the console in C++.
```

As your programmes become more complex, you can use comments to make it easier to find certain code blocks, or remind you to finish certain coding tasks. Comments act like bookmarks in this sense.

### 3 - Variable names

Variable names should be unambiguous and where possible, short. For example if I was writing a programme that asks for a user's name, I would save their input in a variable called usersName. Seems obvious, but you’d be surprised how often variable names such as ‘a’ or ‘x’ are used. This is lazy and makes understanding what is happening in the program much harder

### 4 - CamelCase

If you use more than one word for a variable name (e.g. myInteger), make sure you capitalise each word. Most people only capitalise from the second word onwards (e.g. myFavouriteFood).

### 5 - Whitespace

Write code as if you were writing an instruction manual. Keep everything in line (unless you have to indent - more on this later), and only break up code blocks with blank lines if it makes sense to do so. Think of code blocks as paragraphs with short sentences that should be kept together until the next sentence is clearly the beginning of a new set of instructions.

### 6 - Indentation

Indentation helps identify where code blocks begin and end. Code blocks in C++ are wrapped in a pair of curly braces { }, and the code inside the block should be indented by 1 tabbed space. If nesting a code block inside another this would be tabbed again. See the example below and don’t worry at this stage if code doesn’t make sense… it will soon!

&nbsp;
&nbsp;
&nbsp;

## Variables and Data types
A data type is a particular kind of data object, for example, a whole number (int), single character (char) or a decimal number (double). A variable's data type determines the values it may contain, plus the operations that may be performed on it.

 A variable in computer programming is a value that can change. Variables are like little boxes that contain values. We put a value (e.g. 8) in a box and give it a tag, for example ‘myInteger’. That way, whenever you want to access the number in the box, you just refer to the variable, ‘myInteger’. The important thing is however, that you can change the value in the box, yet the name of the box still remains the same.

The core data types: int (whole number), char (single character), double (decimal number) are accompanied by similar types which expand or decrease their size and range. The choice between using similar data types is usually a matter of…

* Size of number expected. You may need to calculate large numbers
* Accuracy. If you need a certain level of precision when calculating numbers
* Managing memory resources. Memory can be saved if you only use the appropriate data type
* Size for the job. For example, declaring a variable for an individual's age can be achieved with short.

Within CodeLab we will typically just be using the basic core data types (int, char, double), but for reference the following link lists the wider range of data types that are available in C++: https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm

&nbsp;
&nbsp;
> **Advanced Note** - In C++11 the auto keyword was included to allow a variable data type to be inferred from the value its initialised with.
>
>  ```C++
>  int myFirstInt = 5; //explicitly declared integer variable
>  auto mySecondInt = 6; //variable data type automatically inferred from the value assigned
>  ```
> For the declaration of simple variables with one of the core data types (int, char, double), it is best to be explicit and you would not use auto. Auto is typically used when your programs become much more complex and you are using complex types available in C++.
>
>Further Information
>
>https://en.cppreference.com/w/cpp/language/auto  
>
>https://www.learncpp.com/cpp-tutorial/4-8-the-auto-keyword/
&nbsp;
&nbsp;

&nbsp;
&nbsp;
&nbsp;

## Non-Primitive Data Types

In C++ we also have access to non primitive data types. These are different to the above mention primitive types as they are objects obtained from core library classes (or custom made ones). These objects usually contain enhanced functionality beyond primitive data types that allow the objects to be manipulated.

Strings are one of the most widely used objects in programming. They hold a sequence of characters surrounded by double quotation marks “ on both sides and can contain any characters.

Example Strings:
```
“Hello”, “Hello World”, “Bye”
```

Other non-primitive types we will use in future sessions are Arrays and Vectors, which act as containers for multiple variables/objects.

&nbsp;
&nbsp;
&nbsp;

## Input and Output Stream

The  ```#include <iostream>``` directive written at the top of a C++ program provides us access to the C++ standard library input and output stream. We can use this functionality to get user input from the console and output information to the console.

We use ```cin``` and the extraction operator ```>>``` to get user input from the console

We use ```cout``` and the insertion operator ```<<``` to output information to the console.

&nbsp;
&nbsp;
&nbsp;

## Hello World

In programming Hello World is the traditional first program to write when getting started with any language. Below is the sample code for a basic Hello World program written in C++. Refer to the comments and code breakdown for an explanation of the main elements of the program, many of which you will require for every C++ program you write

```C++

#include <iostream> // preprocessor directive - include iostream file
using namespace std; // declare use of the standard namespace

int main(){ // define main function
	cout << "Hello World" << endl; // output statement

	return 0; //return statement
}

```

&nbsp;

### Code breakdown

#### Preprocessor directive

```C++
#include <iostream> // preprocessor directive - include iostream file
```
Anything beginning with a #hash is a preprocessor directive that instructs the compiler to process this information before compiling of the rest of the code. The #include instruction acts like a copy and paste command and tells the compiler to copy and paste the contents of the iostream header file to the top of our program. The iostream header file contains the declarations for the standard input-output library in c++. We need this to gain access to things like cout which is the standard library output command for outputting content to the console.


#### Using Namespace Std

```C++
using namespace std; // declare use of the standard namespace
```
The contents of iostream that we’ve just added are part of the standard C library which includes lots of useful predeclared functionality for c++ programs. All the elements of this library are declared within a namespace in this case the std namespace. To access its functionality we need to let the compiler know we are using this standard namespace. With the namespace declared if the compiler encounters any undeclared identifiers in the code (e.g. cout), it will check to see if they are present within the namespace. If it is the program will proceed, otherwise it will throw an error. Declaring the use of the standard namespace saves us having to explicitly declare its use every time we use functionality from the library. For example if without declaring use of the std namespace our cout statement in our Hello World program would need to be written like the example below with std explicitly declared before both cout and endl as the functionality for come from the standard library:

```C++
std::cout << "Hello, World!" << std::endl;
```

&nbsp;
&nbsp;
> **Advanced Note** When starting out with small programs declaring using namespace std at the beginning of our programs saves times as we can avoid the constant explicit declaration as described above. However, when you become more proficient and begin writing more advanced programs it is advised that you avoid its declaration at the start of the program and do explicitly declare the namespace before operations like cout each time. This helps avoid potential conflicts between different libraries you might be using that are using the same names for different operations.

&nbsp;
&nbsp;

#### The Main Function
```C++
int main(){ // define the main function
      cout << "Hello World" << endl; // output statement
	return 0; //return statement
}
```
All C++ programs start with the execution of a **main function**. It is essential to have a main function otherwise your program simply will not work, this is the first thing the compiler looks for when executing C++ code. The word main is followed by a pair of parentheses followed by the body of the main function which will be enclosed by curly braces. The function body includes all the code that we want our program to run. C++ programs are executed line by line in order. Each line is a statement which is an expression that can produce a result. Statements are always terminated by a semicolon. Omitting the semicolon is probably the most common error when writing code. Try removing the semicolon at the end of the hello world statement, a red line should appear on that line in the IDE to indicate an error. These red lines are useful for helping find errors when writing your code.


The first line in our main function is an output statement. ```cout``` is the standard output stream in c++. Our ```cout``` statement is saying insert the sequence of characters for “Hello world” into the output stream. You will notice the two less than signs ```<<```  this is called the insertion operator. So we are inserting Hello World into the output stream.

We then insert something called ```endl```. This is an instruction to insert a newline then flush the contents of the output stream.

&nbsp;
&nbsp;
> **Advanced Note** - A new line can also be created by inserting the newline character ```\n``` within a string. The difference between ```endl``` and ```\n``` is ```endl``` flushes the output stream after adding the newline. Flushing the stream ensures the contents are outputted to the console in a timely manner. If you have several  ```cout``` statements one after the other, it may not be necessary to flush the stream at the end of each ```cout``` statement. Therefore you could use the newline character instead and then on the final line use ```endl``` to ensure the stream is flushed.
>```C++
> cout << "Hello, World! This is the first line \n";
> cout << "Here is a second line \n";
> cout << "Here is a third line \n";
> cout << "This fourth line will flush afterwards" << endl;
>```
>*Further Information:* https://www.geeksforgeeks.org/endl-vs-n-in-cpp/

&nbsp;
&nbsp;

#### Return Statement

The final line of the main function is the return statement. The return statement causes the main function to finish. Usually this is followed by a return code in our case 0, which is generally interpreted as the program worked as expected without errors.

&nbsp;
&nbsp;
> **Visual Studio Note** - When running the program on Visual Studio you may think it is not working. This is because the console window exits as soon as the return statement is reached, which happens so quickly it appears the program does not run. To force the console window to stay open include the following line before the return statement. This line of code waits for input e.g. pressing enter.
>
>  ```C++
>  system("pause");
>  ```

&nbsp;
&nbsp;

&nbsp;
&nbsp;
&nbsp;

## Operators

An operator is in computer programming is a symbol that tells the compiler to perform specific mathematical, relational or logical operations.

This might seem complex, but in fact we use these symbols all the time. The most simple operators to understand are probably the mathematical or arithmetic operators.  

&nbsp;

### Mathematical Operators

These include the following operators:
```
+ 	(additional)
- 	(subtraction)
/ 	(division)
* 	(multiplication)
% 	(modulus or ‘find remainder’)
```

Here are some examples of mathematical operators in action. Note the use of variables here.
```C++
int a = 5;
int b = 7;
int c = a + b;
```
The value of the variable c is 12.

```C++
int d = 20;
int e = 10;
int f = d - e;
```
The value of the variable f is 10.

```C++
int numberOne = 10;
int numberTwo = 3;
int remainder = numberOne % numberTwo;
```
The value of the variable remainder is 1.

&nbsp;
&nbsp;

### Concatenation

The + operator can also be used to concatenate or ‘link’ Strings. This means you can join one String to another using the + operator.
```C++
string h = "hello";
string i = " ";
string j = "world";
cout << h + i + j << endl;
```
This concatenates the word “hello” with a space “ “  and the word “world”. The String printed to the console here would look this this: “hello world”.

&nbsp;
&nbsp;

### The Assignment Operator

The assignment operator should also be familiar to you.

It looks like this:

=  

This simply means you are assigning the value on the right to the variable on the left. Here are some examples.
```C++
double a = 10.5;
```
Here you are assigning the variable a the value 10.5 - note the use of double as the data type as we are dealing with a decimal number.

```C++
bool myBool = false;
```
Here you are assigning the variable myBool the value false.

&nbsp;
&nbsp;
&nbsp;

## Constant Variables

When we want to store some information in our program we create a variable. As there name suggests the values stored in a variable can change (they can vary!). If you have a value that shouldn’t be altered you can declare this as a constant by using the const keyword at the beginning of the variable declaration. Variables declared as a constant cannot have their value changed.

&nbsp;

### An Example

Let’s say we wanted to create a simple maths program and wanted to store the value of PI in a variable. The value of PI is   the same so we don’t want this to change, else it could interfere with other calculations in our program. Therefore, it would make sense to declare our PI variable as a constant.

```C++
const int PIVALUE = 3.14159265359;
```

Constant variable names are typically written in all capital letters to easily identify them as constants in the program.
