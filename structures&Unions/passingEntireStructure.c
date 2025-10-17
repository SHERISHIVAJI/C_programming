#include<stdio.h>
struct point {
    int x;
    int y;
};

void display(struct point pt) {
    printf("Point is (%d, %d)", pt.x, pt.y);
}

int main() {
    struct point p = {10, 20};
    display(p);
    return 0;
}