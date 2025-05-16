#include<stdio.h>
//switch keyword in C
int main() {
    int choice = 2;
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