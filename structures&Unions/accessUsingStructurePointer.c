#include<stdio.h>
#include<string.h>
struct employee {
    int id;
    char name[50];
};

int main() {
    struct employee e = {101, "Sheri Shivaji"};
    struct employee *ptr = &e;
    
    printf("employee ID: %d\n", ptr->id);
    printf("employee Name: %s", ptr->name);
    return 0;
}