/* 
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7
6 6 6 6 6 6
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
*/

#include<stdio.h>
int main() {
    int number_of_lines;
    scanf("%d", &number_of_lines);
    for(int i = 1; i <= number_of_lines; i++) {
        for(int j = 1; j<=i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    for(int i = number_of_lines - 1; i >= 1; i--) {
        for(int j = 1; j<=i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}