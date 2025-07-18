#include<stdio.h>
int main() {
    int num, fact = 1, ans = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    while(fact <= num) {
        ans *= fact;
        fact++;
    }
    printf("The factorial of %d is %d", num, ans);
    return 0;
}