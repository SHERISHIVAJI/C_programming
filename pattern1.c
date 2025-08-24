/* 
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/

#include<stdio.h>
int main() {
    int number_of_lines;
    scanf("%d", &number_of_lines);
    int count = 0;
    for(int i = 1; i <= number_of_lines; i++) {
        if(i%2 != 0) {
            for(int j = 1; j<=i; j++) {
                count++;
                if(j<i)
                    printf("%d*", count);
                else
                    printf("%d", count);
            }
        }
        else {
            count += i;
            for(int j = 1; j<=i; j++) {
                if(j<i)
                    printf("%d*", count);
                else
                    printf("%d", count);
                count--;
            }
            count += i;
        }
        printf("\n");
    }
    return 0;
}