#include<stdio.h>
#include<math.h>
#include<conio.h>

int main() {
    float a, b, c, discriminant;
    float root1, root2, rt, r_part, i_part;
    printf("Enter the coefficients of the quadratic equation \"ax^2 + bx + c\":\n");
    printf("Enter a, b, & c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - ( 4 * a * c);
    if(discriminant == 0) {
        printf("Roots are Real and Equal\n");
        root1 = -b/(2 * a);
        root2 = root1;
        printf("\nRoot1 = %f\tRoot2 = %f\n", root1, root2);
    } else {
        if(discriminant > 0) {
            printf("Roots are Real and Distinct\n");
            rt = sqrt(discriminant);
            root1 = (-b + rt)/(2 * a);
            root2 = (-b - rt)/(2 * a);
            printf("\nRoot1 = %f\tRoot2 = %f\n", root1, root2);
        } else {
            printf("Roots are complex\n");
            r_part = -b/(2 * a);
            i_part = sqrt(fabs(discriminant));
            printf("Root1 = %.2f + i%.2f\tRoot2 = %.2f - i%.2f", r_part, i_part, r_part, i_part);
        }
    }
    return 0;
}