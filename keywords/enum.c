#include<stdio.h>
//enum keyword in C

enum Days {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    enum Days today = SATURDAY;
    printf("Today's day number is: %d", today);
    return 0;
}