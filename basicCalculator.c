#include<stdio.h>

int main() {
    double num1, num2, result;
    char operator;
    char choice;

    printf("\n========== Basic Calculator ==========\n");

    do {
        printf("Enter first number: ");
        if(scanf("%lf", &num1) != 1) {
            printf("Invalid input! Exiting...\n");
            break;
        }

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
        if(scanf("%lf", &num2) != 1) {
            printf("Invalid input! Exiting...\n");
            break;
        }

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 == 0)  
                    printf("Erroe: Division by zero is not allowed.\n");
                else {
                    result = num1 / num2;
                    printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
            default: 
                printf("Invalid operator! Please use +, -, *, or /.\n");
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &choice);
    } while(choice == 'y' || choice == 'Y');

    printf("Exiting Calculator. Goodbye!\n");
    return 0;
}