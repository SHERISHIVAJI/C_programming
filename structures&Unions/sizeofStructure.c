#include<stdio.h>
#pragma pack(1)
typedef struct {
    char code;
    int quality;
    float price;
} Packed_Item;

typedef struct {
    char code;
    int quality;
    float price;
} Regular_Item;

int main() {
    printf("The size of the PackedItem is: %lu bytes\n", sizeof(Packed_Item));
    printf("The size of the RegularItem is: %lu bytes\n", sizeof(Regular_Item));
    return 0;
}