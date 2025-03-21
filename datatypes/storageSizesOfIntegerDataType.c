#include <stdio.h> 
#include <limits.h>

//storage size and range of all integer data types in bytes
int main() 
{
    //character data type
    printf("\n******************** char *********************\n");
    printf("Storage size for char : %d bytes\n", sizeof(char));
    printf("Storage size for signed char : %d bytes\n", sizeof(signed char));
    printf("Storage size for unsigned char : %d bytes\n", sizeof(unsigned char));
    printf("\n\t\tRange of char data type:\n");
    printf("Signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Unsigned char: 0 to %u\n", UCHAR_MAX);
    printf("====================================================================================\n");

    //int data type
    printf("\n******************** int *********************\n");
    printf("Storage size for int : %d bytes\n", sizeof(int));
    printf("Storage size for signed int : %d bytes\n", sizeof(signed int));
    printf("Storage size for unsigned int : %d bytes\n", sizeof(unsigned int));
    printf("\n\t\tRange of int data type:\n");
    printf("Int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Unsigned int: 0 to %u\n", UINT_MAX);
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
    printf("\n\t\tRange of short int data types:\n");
    printf("Short int: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned short int: 0 to %u\n", USHRT_MAX);
    printf("====================================================================================\n");

    //long int data type
    printf("\n******************** long int *********************\n");
    printf("Storage size for long int : %d bytes\n", sizeof(long int));
    printf("Storage size for signed long int : %d bytes\n", sizeof(signed long int));
    printf("Storage size for unsigned long int : %d bytes\n", sizeof(unsigned long int));
    printf("\n\t\tRange of long int data types:\n");
    printf("Long int: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned long int: 0 to %lu\n", ULONG_MAX);
    printf("====================================================================================\n");

    //long long int data type
    printf("\n******************** long long int *********************\n");
    printf("Storage size for long long int : %d bytes\n", sizeof(long long int));
    printf("Storage size for signed long long int : %d bytes\n", sizeof(signed long long int));
    printf("Storage size for unsigned long long int : %d bytes\n", sizeof(unsigned long long int));
    printf("\n\t\tRange of long long int data types:\n");
    printf("Long int: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Unsigned long int: 0 to %llu\n", ULLONG_MAX);
    printf("====================================================================================\n");

    return 0;
}