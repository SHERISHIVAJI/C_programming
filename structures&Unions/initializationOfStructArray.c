#include <stdio.h>  
struct Point {  
    float x;  
    float y;  
};  
int main() {   //main function  
    struct Point points1[2] = { {1.2, 2.6}, {3.32, 4.6} };  
    struct Point points2[2] = { 5.8, 6.4, 7.2, 8.9 };  
    struct Point points3[2] = { {.x = 9.26, .y = 10.9},  
                                {.y = 12.45, .x = 11.3} };  
    printf("Points1:\n");  
    for (int i = 0; i < 2; i++)  
        printf("(%.1f, %.1f)\n", points1[i].x, points1[i].y);  
    printf("\nPoints2:\n");  
    for (int i = 0; i < 2; i++)  
        printf("(%.1f, %.1f)\n", points2[i].x, points2[i].y);  
    printf("\nPoints3:\n");  
    for (int i = 0; i < 2; i++)  
        printf("(%.1f, %.1f)\n", points3[i].x, points3[i].y);  
    return 0;  
}