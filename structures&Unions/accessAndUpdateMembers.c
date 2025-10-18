#include <stdio.h>  
struct Car {  
    char model[20];  
    int year;  
};  
int main() {    //main function  
    struct Car cars[2] = {  
        {"Honda", 2015},  
        {"Toyota", 2018}  
    };  
      
    cars[0].year = 2020;  
    cars[1].year = 2022;  
    printf("After Update:\n");  
    for (int i = 0; i < 2; i++) {  
        printf("Model: %s, Year: %d\n", cars[i].model, cars[i].year);  
    }  
    return 0;  
}