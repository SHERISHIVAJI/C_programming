#include<stdio.h>
#define PI 3.14159;
typedef struct Circle {
    float radius;
    void (*setRadius)(struct Circle*, float);
    float (*getArea)(struct Circle*);
    void (*display)(struct Circle*);
}Circle;

void setRadius(Circle* c, float r) {
    if(r<0) {
        printf("Invalid radius. Nust be non-negative.\n");
        return;
    }
    c->radius = r;
}

float getArea(Circle* c) {
    return PI*c->radius*c->radius;
}

void display(Circle* c) {
    printf("Circle Radius: %.2f\n", c->radius);
}

void initCircle(Circle* c) {
    c->radius = 0.0f;
    c->setRadius = setRadius;
    c->getArea = getArea;
    c->display = display;
}

int main() {
    Circle c1;
    initCircle(&c1);
    c1.setRadius(&c1, 6);
    c1.display(&c1);
    printf("Circle Area: %.2f\n", c1.getArea(&c1));
    return 0;
}