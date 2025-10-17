#include<stdio.h>
struct point {
    int x;
    int y;
};

void display(struct point *ptr) {
    printf("Point is (%d, %d)", ptr->x, ptr->y);
}

int main() {
    struct point p = {10, 20};
    display(&p);
    return 0;
}