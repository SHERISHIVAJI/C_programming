#include<stdio.h>
//volatile keyword in C
int main() {
    volatile int sensor_reading = 0;
    //Simulating sensor reading update
    for (int i=0; i<10; i++) {
        sensor_reading = i;
        printf("Sensor Reading : %d\n", sensor_reading);
    }
    return 0;
}