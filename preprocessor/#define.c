#include<stdio.h>
#define PI 3.14
#define SQUARE(x) ((x)*(x))

int main() {
    int radius;
    printf("Enter the radius: ");
    scanf("%d", &radius);
    float area = PI * SQUARE(radius);
    printf("Area of circle with %d radius is %.2f", radius, area);
    return 0;
}