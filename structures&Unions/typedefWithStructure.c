#include<stdio.h>
typedef struct {
    int vehicle_Id;
} Vehicle;

typedef struct {
    long int order_No;
}Order;

int main() {
    Vehicle v = {10};
    Order o = {82475654};
    printf("Vehicle Id is: %d", v.vehicle_Id);
    printf("\nOrder Number is: %ld", o.order_No);
    return 0;
}