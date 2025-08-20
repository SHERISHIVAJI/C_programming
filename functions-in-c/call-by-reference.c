#include <stdio.h>
//Function declaration
void changeNumber(int*);

int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    printf("Before function call: %d\n", number);
    changeNumber(&number); //Function calling
    printf("After function call: %d", number);
    return 0;
};

//Function definition
void changeNumber(int* num) {
    printf("Before adding value inside function number: %d\n", *num);
    *num += 100;
    printf("After adding value inside function number: %d\n", *num);
}