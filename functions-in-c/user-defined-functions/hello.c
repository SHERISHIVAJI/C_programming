/*
2) User Defined Functions in C
In C programming, user-defined functions are the functions that are created by the C programmer so that the user can use them many times. It reduces the complexity of a big program and optimizes the code.

Key Features of User Defined Functions in C

Several key features of user-defined functions in C programming are as follows:

Logic encapsulation through user-defined functions helps improve modularity and system scalability because code blocks that have similarities can be stored in a single name container.
There is less risk for errors, which helps to improve maintainability because changes in logic can be made containing a single function instead of multiple parts throughout the code.
A function's usefulness and variety may be enhanced by enabling it to accept parameters and return values.
Controlling the function's name, scope, and behavior is useful for avoiding conflicts and tailoring logic to specific requirements.
"Recursiveness" is the capacity of user-defined functions to call themselves. This capacity can be used to solve tree traversal, Fibonacci, and factorial challenges.
*/

#include<stdio.h>

//User defined function declaration
void hello();

int main() {
    //user defined function call
    hello();

    return 0;
}

//user defined function definition
void hello() {
    printf("Hello, This is a user-defined function!");
}