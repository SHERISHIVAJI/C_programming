/*
1) Library Functions
Library functions are the inbuilt functions in C that are grouped and placed in a common place called the library. Such functions are used to perform some specific operations. For example, printf is a library function used to print on the console. The library functions are created by the designers of compilers. All C standard library functions are defined inside the different header files saved with the extension .h.

We need to include these header files in our program to make use of the library functions defined in such header files. For example, in order to use the library functions, such as printf/scanf, we need to include stdio.h in our program, which is a header file that contains all the library functions regarding standard input/output. Library Functions are the built-in functions that are mainly declared in the C header files, such as scanf(), printf(), gets(), puts(), ceil(), floor(), etc.
*/

#include<stdio.h>
#include<math.h>
int main() {
    double num = 169.0;
    double result;

    result = sqrt(num);

    printf("The square root of %.2f if %.2f", num, result);
    return 0;
}