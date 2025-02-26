#include<stdio.h>

/*
Calculate the area of a square

* * * * *
*       *
*       *
* * * * *

area=side*side

*/
int main()
{
    float side;
    printf("Enter the side: ");
    scanf("%f",&side);

    float area = side*side;
    printf("Area of a square with side = %.2f is %.2f",side,area);
    return 0;
}