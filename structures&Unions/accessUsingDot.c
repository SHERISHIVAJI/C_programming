#include<stdio.h>
#include<string.h>
struct employee {
    int id;
    char name[50];
};

int main() {
    struct employee e;
    e.id = 101;
    strcpy(e.name, "Shivaji");

    printf("employee ID: %d\n", e.id);
    printf("employee Name: %s", e.name);
    return 0;
}