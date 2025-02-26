#include<stdio.h>

/*
Calculate the area of a circle

area = Pi*radius*radius

*/
int main()
{
    float radius;
    printf("Enter the radius of a circle: ");
    scanf("%f",&radius);

    float area = 3.14*radius*radius;
    printf("Area of a circle with radius = %.2f is %.2f",radius,area);
    return 0;
}