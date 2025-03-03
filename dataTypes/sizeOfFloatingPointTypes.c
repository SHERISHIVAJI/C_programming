#include<stdio.h>
#include<float.h>
int main()
{
    printf("***** float *****\n");
    printf("Storage size for float: %d\n",sizeof(float));
    printf("Minimum float positive value: %E\n", FLT_MIN ); 
    printf("Maximum float positive value: %E\n", FLT_MAX ); 
    printf("Precision value: %d\n", FLT_DIG );
    printf("\n***** double *****\n");
    printf("Storage size for double: %d\n",sizeof(double));
    printf("Storage size for long double: %d\n",sizeof(long double));
    return 0;
}