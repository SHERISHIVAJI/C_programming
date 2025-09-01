#include<stdio.h>
int main() {
    char str1[20],str2[20];    
    printf("Enter 1st string: ");    
    gets(str1);
    printf("Enter 2nd string: ");    
    gets(str2);

    int length_of_str1 = 0;
    for(int i =0; str1[i] != '\0'; i++)
        length_of_str1++;

    int length_of_str2 = 0;
    for(int i =0; str2[i] != '\0'; i++)
        length_of_str2++;

    int flag = 1;
    if(length_of_str1 == length_of_str2) {
        for(int i = 0; i < length_of_str1; i++) {
            if(str1[i] != str2[i]) {
                flag = 0;
                break;
            }
        }
        if(flag) 
            printf("Strings are equal");
        else
            printf("Strings are not equal");
    }
    else
        printf("Strings are not equal");
    return 0;
}