#include<stdio.h>
int main() {
    FILE *file;
    int result;
    file = fopen("file.txt", "r");

    if(file == NULL) {
        printf("Error opening the file\n");
        return 1;
    }

    fseek(file, 1000, SEEK_SET);

    if(result != 0) {
        printf("Error: fseek failed. Could not move file pointer.\n");
    } else {
        printf("fseek successful. Pointer moved to position 1000.\n");
    }
    fclose(file);
    return 0;
}