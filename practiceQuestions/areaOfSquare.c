#include<stdio.h>
//A C program to calculate area of a square
int main() {
    int side;
    printf("Enter the side of a square: ");
    scanf("%d", &side);

    int areaOfSquare = side * side;
    printf("The area of a square with side %d is %d", side, areaOfSquare);
    return 0;
}