#include<stdio.h>
int show();
int showAdd(int);
int (*arr[3])();
int (*(*ptr)[3])();

int main() {
    int result;
    arr[0] = show;
    arr[1] = showAdd;
    ptr = &arr;
    result = (**ptr)();
    printf("Printing the vlaues returned by show(): %d", result);
    (*(*ptr + 1))(result);
}

int show() {
    int a = 55;
    return a++;
}

int showAdd(int b) {
    printf("\nAdding 90 to the value returned by show(): %d", b + 90);
}