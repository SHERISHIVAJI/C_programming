#include<stdio.h>

int my_strcmp(char *ptr1, char *ptr2) {
    while(*ptr1 == *ptr2 && (*ptr1 != '\0' || *ptr2 != '\0')) {
        ptr1++;
        ptr2++;
    }
    return (*ptr1 - *ptr2);
}

int main() {
    char str1[20] = "Sheri", str2[] = "Shivaji";
    int result = my_strcmp(str1, str2);
    printf("String Comparision result is: %d", result);
    return 0;
}