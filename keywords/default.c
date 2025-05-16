#include<stdio.h>
//default keyword in C
int main() {
    int choice = 3;
    switch(choice) {
        case 1:
            printf("You chose option 1\n");
            break;
        case 2:
            printf("You chose option 2\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}