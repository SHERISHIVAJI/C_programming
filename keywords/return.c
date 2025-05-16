#include<stdio.h>
//return keyword in C

int square(int number) {
    return number*number;
}
int main() {
    int result = square(66);
    printf("The square of 66 is %d", result);
    return 0;
}