# Learning Log

## 04-04-2026
- Set up GitHub repo and Git
- First commit — journey officially started
- Using this for my public/private note-taking.

## 20-03-2026
- Wrote my first "Hello world" program
- Lesson 01 : Output & Variables and its Types
- cout << "Hello" << endl;  // prints text
  cout << a + b << endl;    // prints expressions

- int x = 10;        // whole numbers
  float f = 3.14;    // decimals (6-7 digits)
  double d = 3.14159 // decimals (15-16 digits)
  char c = 'A';      // single character
  bool b = true;     // true or false

- What endl is.
- Wrote a program to perform the basic Mathematical operations.
- Learn't that during Integer Division,, C++ throws out the decimal part(Rounds-down).
- There are 2 ways to solve it - 1.To Declare the 2 numbers as float.
                                 2.To use type casting — temporarily treating it as a different type.
The difference between float and double(4 & 8 bytes).
Wrote a program to differentiate a number by odd/even using %.

## 24-03-2026
- Lesson 2 : User Input.
- Learnt the usage of cin.
cin >> num;         // reads one value
cin >> a >> b;      // reads two values

## 25-03-2026
- Lesson 3 : If-Else and Comparision operators.
if (condition) {
    // runs if TRUE
} else if (condition) {
    // another check
} else {
    // runs if all above FALSE
}

+  -  *  /        // arithmetic
%                 // remainder (modulo)
==  !=  >  <  >=  <=  // comparison
&&  ||  !         // logical AND, OR, NOT
+=  -=  *=        // shorthand
i++  i--          // increment / decrement

## 27-03-2026
- Task Done : Write a program from scratch that:
        Asks the user to enter a number.
        Tells them if it's odd or even.
        Also tells them if it's positive, negative or zero.
-Mistake : Tried integrating everything into the same loop.
        Can use multiple loops for multiple functionalities.

Lesson 04 : Loops.
// for — when you know the count
for (int i = 0; i < 5; i++) { }

// while — when you don't know the count
while (condition) { }

Tasks Done:
        Print the multiplication table of any number the user enters.
        Print all odd numbers between 1 and 50 using a loop and %.

- Lesson 4.1 : of Scope.
for (int i = 0; i < 5; i++) { }
// i is DEAD here — only lived inside the loop

int total = 0;  // lives in whole function
for (int i = 0; i < 5; i++) {
    total += i; // total accessible here
}
cout << total;  // still accessible here

- Significance of +=.

## 04-04-2026
- Lesson 4.2 : Accumulator Pattern
int total = 0;        // initialize OUTSIDE
for (int i = 0; i < 5; i++) {
    total += num;     // accumulate INSIDE
}
cout << total;        // report OUTSIDE
- Mini Project
    Write a program that:
        Asks the user to enter 5 numbers one by one using a loop.
        Calculates and prints the sum.
        Calculates and prints the average.
- Mistake Was doing everything inside the loop — that's actually how beginners think and it makes sense. But the loop's job here is just collecting and accumulating. The reporting happens after.


## 08-04-2026
- Lesson 05 : Arrays
    Array = a row of boxes, each box has an index starting at 0.
Forget the index → wrong box → wrong answer or crash.
- Task : Write a program that:
    Stores 5 numbers in an array (you choose the values)
    Uses a loop to calculate the sum and maximum value
    Prints both
- Finding maximum :
int max = array[0];  // assume first is biggest

for (int i = 1; i < 5; i++) {
    if (array[i] > max) {
        max = array[i];  // found a new biggest
    }
}

## 15-04-2026
- Lesson 06 : Functions
- returnType functionName(parameters) {
    // code
    return value;
}

- Task : Write a program with three separate functions:
    int sum(int arr[], int size) — takes an array, returns the sum.
    int findMax(int arr[], int size) — takes an array, returns the max.
    main() — declares the array, calls both functions, prints results.
- Mistakes : Got confused in the heirachy.

## 15-04-2026
- Not satisfied with the understanding of functions.
- returnType functionName(type parameter1, type parameter2)
- Structure of a function.
    int   findMax  (int arr[],  int size)
    ↑       ↑           ↑          ↑
    │       │           │          │
    │       │           │          └── a normal int telling 
    │       │           │              the function how many
    │       │           │              elements are in the array
    │       │           │
    │       │           └── the array being passed in.
    │       │               int = element type
    │       │               arr = name used INSIDE function
    │       │               [] = means it's an array
    │       │
    │       └── name of the function
    │
    └── what the function RETURNS (an integer)
- The Return Position Rule :
    int sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
        // ❌ NEVER return here — loop hasn't finished
    }
    return total; // ✅ ALWAYS here — after loop completes
}
- Problems
    Problem 1 : Easy
    Write a function int multiply(int a, int b) that returns the product. Call it from main with user input.
    Problem 2 : Medium
    Write a function float average(int arr[], int size) that returns the average of an array.
    Problem 3 : Harder
    Write a function int countEven(int arr[], int size) that counts and returns how many even numbers are in the array.
- The One Rule That Fixes 90% of Your Mistakes
    Each function is its own world. Variables declared in main don't exist in your function. Variables declared in your function don't exist in main. The only bridge between them is parameters and return values.
main                    function
────                    ────────
int arr[6] ──(parameter)──► int arr[]
           ◄──(return)───── float total/size
int total  ✗ not accessible inside function

## 15-05-2026
- Still in the same problem
