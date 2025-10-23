#include <stdio.h>  
  
int main() {   //main function  
    FILE *file;  
    long pos;  
  
    // Open the file in write mode  
    file = fopen("sample.txt", "w+");  
    if (file == NULL) {  
        printf("Unable to open file.\n");  
        return 1;  
    }  
  
    // Write a string to the file  
    fputs("ABCDE12345", file);  
  
    // Move file pointer to the beginning  
    fseek(file, 0, SEEK_SET);  
    printf("Pointer reset to beginning.\n");  
  
    // Read and display first 3 characters  
    for (int i = 0; i < 3; i++) {  
        printf("%c", fgetc(file));  
    }  
  
    // Get and print current file position  
    pos = ftell(file);  
    printf("\nCurrent file pointer position: %ld\n", pos);  
  
    // Move file pointer 2 characters ahead from current position  
    fseek(file, 2, SEEK_CUR);  
    pos = ftell(file);  
    printf("File pointer moved 2 bytes ahead, now at: %ld\n", pos);  
  
    // Move file pointer to 5 bytes from end  
    fseek(file, -5, SEEK_END);  
    pos = ftell(file);  
    printf("File pointer 5 bytes from end, now at: %ld\n", pos);  
  
    fclose(file);  
    return 0;  
}  