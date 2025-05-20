#include <stdio.h>
//A C program to calculate area of a circle
int main() {
    int radius;
    printf("Enter the radius of thge circle: ");
    scanf("%d", &radius);

    float areaOfCircle = 3.14 * radius * radius;
    printf("The area of the circle with radius %d is %.3f", radius, areaOfCircle);
    return 0;
}