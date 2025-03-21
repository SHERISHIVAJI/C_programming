#include <stdio.h> 

//storage size of all integer data types in bytes
int main() 
{
    //character data type
    printf("\n******************** char *********************\n");
    printf("Storage size for char : %d bytes\n", sizeof(char));
    printf("Storage size for signed char : %d bytes\n", sizeof(signed char));
    printf("Storage size for unsigned char : %d bytes\n", sizeof(unsigned char));
    printf("====================================================================================\n");

    //int data type
    printf("\n******************** int *********************\n");
    printf("Storage size for int : %d bytes\n", sizeof(int));
    printf("Storage size for signed int : %d bytes\n", sizeof(signed int));
    printf("Storage size for unsigned int : %d bytes\n", sizeof(unsigned int));
    printf("====================================================================================\n");

    //short data type
    printf("\n******************** short *********************\n");
    printf("Storage size for short : %d bytes\n", sizeof(short));
    printf("Storage size for signed short : %d bytes\n", sizeof(signed short));
    printf("Storage size for unsigned short : %d bytes\n", sizeof(unsigned short));
    printf("====================================================================================\n");

    //long data type
    printf("\n******************** long *********************\n");
    printf("Storage size for long : %d bytes\n", sizeof(long));
    printf("Storage size for signed long : %d bytes\n", sizeof(signed long));
    printf("Storage size for unsigned long : %d bytes\n", sizeof(unsigned long));
    printf("====================================================================================\n");

    //short int data type
    printf("\n******************** short int *********************\n");
    printf("Storage size for short int : %d bytes\n", sizeof(short int));
    printf("Storage size for signed short int : %d bytes\n", sizeof(signed short int));
    printf("Storage size for unsigned short int : %d bytes\n", sizeof(unsigned short int));
    printf("====================================================================================\n");

    //long int data type
    printf("\n******************** long int *********************\n");
    printf("Storage size for long int : %d bytes\n", sizeof(long int));
    printf("Storage size for signed long int : %d bytes\n", sizeof(signed long int));
    printf("Storage size for unsigned long int : %d bytes\n", sizeof(unsigned long int));
    printf("====================================================================================\n");

}