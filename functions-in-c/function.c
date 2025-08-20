#include<stdio.h>
//Function Declaration
int multiply(int, int);

int main() {
    int result;

    //Calling the multiply() function
    result = multiply(4,5);

    printf("The multiplication of numbers is : %d", result);
    return 0;
}

//Function Definitionn
int multiply(int a, int b) {
    return a*b;
}