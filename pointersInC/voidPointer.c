#include<stdio.h>
int main() {
    int num;
    float point;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter a floating point: ");
    scanf("%f", &point);

    void *ptr;
    printf("Value of void pointer: %d\n", ptr);
    printf("Address of void pointer: %u\n\n", &ptr);

    printf("Pointer assigned to int\n");
    ptr = &num;
    printf("Value of integer using pointer: %d\n", *(int*)ptr);
    printf("Address of integer: %u\n", &num);
    printf("Address of integer using pointer: %u\n", ptr);
    printf("Address of void pointer: %u\n\n", &ptr);

    printf("Pointer assigned to float\n");
    ptr = &point;
    printf("Value of integer using pointer: %.2f\n", *(float*)ptr);
    printf("Address of floating-point: %u\n", &point);
    printf("Address of integer using pointer: %u\n", ptr);
    printf("Address of void pointer: %u\n", &ptr);
    return 0;
}