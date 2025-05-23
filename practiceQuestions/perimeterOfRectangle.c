#include<stdio.h>
//Perimeter of the rectangle
int calculatePerimeter(int length, int breadth) {
    return 2 * (length + breadth);
}
int main() {
    int length, breadth;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);
    int perimeter = calculatePerimeter(length, breadth);
    printf("The perimeter of the rectangle is : %d\n", perimeter);
    return 0;
}