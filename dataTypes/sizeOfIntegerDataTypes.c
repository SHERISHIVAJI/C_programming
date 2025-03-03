#include<stdio.h>
int main()
{
    printf("***** char *****\n");
    printf("Storage size for char: %d\n",sizeof(char));
    printf("Storage size for signed char: %d\n",sizeof(signed char));
    //printf("Storage size for unsinged char: %d\n",sizeof(unsinged char));
    printf("\n***** short *****\n");
    printf("Storage size for short: %d\n",sizeof(short));
    printf("Storage size for signed short: %d\n",sizeof(signed char));
    printf("Storage size for unsigned short: %d\n",sizeof(unsigned char));
    printf("\n***** int *****\n");
    printf("Storage size for int: %d\n",sizeof(int));
    printf("Storage size for signed int: %d\n",sizeof(signed  int));
    printf("Storage size for unsigned int: %d\n",sizeof(unsigned int));
    printf("\n***** short int *****\n");
    printf("Storage size for short int: %d\n",sizeof(short  int));
    printf("Storage size for signed short int: %d\n",sizeof(signed short int));
    printf("Storage size for unsigned short int: %d\n",sizeof(unsigned short int));
    printf("\n***** long *****\n");
    printf("Storage size for long: %d\n",sizeof(long));
    printf("Storage size for signed long: %d\n",sizeof(signed long));
    printf("Storage size for unsigned long: %d\n",sizeof(unsigned long));
    printf("\n***** long int *****\n");
    printf("Storage size for long int: %d\n",sizeof(long int));
    printf("Storage size for signed long int: %d\n",sizeof(signed long int));
    printf("Storage size for unsigned long int: %d\n",sizeof(unsigned long int));     
    return 0;
}