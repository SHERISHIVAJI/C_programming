#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int *ptr = &num;
    printf("Address of num before incement: %u\n", ptr);
    printf("Value at pointer variable before incement: %d\n", *ptr);

    ptr++; //ptr incresed by 1*sizeof(int)
    printf("Address of num after incementing by 1: %u\n", ptr);
    printf("Value at pointer variable after incement: %d\n", *ptr);

    ptr += 4; //ptr incresed by 4*sizeof(int)
    printf("Address of num after incementing by 4: %u\n", ptr);
    printf("Value at pointer variable after incement: %d\n", *ptr);

    ptr -= 3; //ptr decreased by 3*sizeof(int)
    printf("Address of num after decrementing by 3: %u\n", ptr);
    printf("Value at pointer variable after decrement: %d\n", *ptr);
    return 0;
}