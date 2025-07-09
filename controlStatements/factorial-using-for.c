#include<stdio.h>
int main() {
    int num, ans = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int fact = 1; fact <= num; fact++) 
        ans *= fact;
    printf("The factorial of %d is %d", num, ans);
    return 0;
}