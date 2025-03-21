#include <stdio.h> 
#include <float.h> 

//storage size and range of floating-point datatypes

int main() 
{
    //float data type
    printf("\n******************** float *********************\n");
    printf("Storage size for float : %d \n", sizeof(float));
    printf("Minimum float positive value: %E\n", FLT_MIN ); 
    printf("Maximum float positive value: %E\n", FLT_MAX ); 
    printf("Precision value: %d\n", FLT_DIG ); 
    printf("====================================================================================\n");

    //double data type
    printf("\n******************** double *********************\n");
    printf("Storage size for double : %d \n", sizeof(double)); 
    printf("Minimum double positive value: %E\n", DBL_MIN ); 
    printf("Maximum double positive value: %E\n", DBL_MAX ); 
    printf("Precision value: %d\n", DBL_DIG ); 
    printf("====================================================================================\n");

    //long double data type
    printf("\n******************** long double *********************\n");
    printf("Storage size for double : %d \n", sizeof(long double)); 
    printf("Minimum double positive value: %LE\n", LDBL_MIN ); 
    printf("Maximum double positive value: %LE\n", LDBL_MAX ); 
    printf("Precision value: %d\n", LDBL_DIG ); 
    printf("====================================================================================\n");

    return 0; 
}