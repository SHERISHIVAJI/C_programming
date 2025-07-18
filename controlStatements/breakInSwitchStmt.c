#include<stdio.h>
int main() {
    int choice;
    printf("Menu:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Quit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You seleccted option 1\n");
            break;
        case 2:
            printf("You seleccted option 2\n");
            break;
        case 3:
            printf("Quitting the menu......\n");
            break;
        default:
            printf("Invalid choice.Try one more time.!!\n");
            break;
    }
    return 0;
}