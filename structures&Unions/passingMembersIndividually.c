#include<stdio.h>
struct point {
    int x;
    int y;
};

void display(int x, int y) {
    printf("Point is (%d, %d)", x, y);
}

int main() {
    struct point p = {10, 20};
    display(p.x, p.y);
    return 0;
}