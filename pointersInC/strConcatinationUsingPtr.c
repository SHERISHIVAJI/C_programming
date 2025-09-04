#include<stdio.h>

void my_strcat(char *ptr1, char *ptr2) {
    while(*ptr1 != '\0')
        ptr1++;
    while(*ptr2 != '\0')
        *ptr1++ = *ptr2++;
    *ptr1 = '\0';
}
int main() {
    char str1[20] = "Sheri", str2[] = "Shivaji";
    printf("Before concationation:\n");
    printf("String1 = %s\n", str1);
    printf("String2 = %s\n\n", str2);

    my_strcat(str1, str2);
    
    printf("After concationation:\n");
    printf("String1 = %s\n", str1);
    printf("String2 = %s\n\n", str2);

    return 0;
}