#include<stdio.h>
//it stores the integer data in the variable specified
int main()
{
    int number1=25;
    int number2=10;
    printf("number1 + number2 = %d",number1+number2);
    //25/10= 2.5 but it stores only 2
    printf("\nnumber1 / number2 = %d",number1/number2);
    number2=10.92;//instead of storing  10.92 it only stores 10
    printf("\nnumber2 = %d",number2);
}