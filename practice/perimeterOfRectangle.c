#include<stdio.h>
/*
Calculate the perimeter of the rectangle

perimeter = 2(length+breadth)
*/

int main()
{
    //Declaing length, breadth
    float length,breadth;

    printf("Enter the length of rectangle: ");
    scanf("%f",&length);

    printf("Enter the breadth of rectangle: ");
    scanf("%f",&breadth);

    float perimeter = 2*(length + breadth);
    printf("\nThe perimeter of rectangle with length and breadth as %.2f and %.2f id %.2f",length,breadth,perimeter);

    return 0;
}