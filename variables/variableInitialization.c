#include<Stdio.h>

//Declaration and initialization of variable in C
int main()
{
    /*Variable declaration*/
    int a, b;
    int c;
    float f;

    /*Actual initialization*/
    a = 20;
    b = 10;
    c = a + b;
    printf("Value of c is: %d",c);

    f = 70.0/3.0;
    printf("\nValue of f is: %.2f",f);
    return 0;
}