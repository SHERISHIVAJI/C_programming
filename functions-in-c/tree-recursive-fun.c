#include<stdio.h>
int treeRecPrintFun(int n) {
    if(n <= 0)
        return 0;
    printf("%d ", n);
    treeRecPrintFun(n - 1);
    treeRecPrintFun(n - 1);
}

int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    treeRecPrintFun(number);
    return 0;
}