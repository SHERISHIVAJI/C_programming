#include <stdio.h>
/*
Calculate the cube of a given number
===> NxNxN
*/

int main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d",&number);

    int cube = number*number*number;
    printf("Cube of %d is %d",number,cube);
    return 0;
}