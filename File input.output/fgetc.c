//fgetc is used for read mode only.

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("sample.txt", "r");

    printf("%c\t", fgetc(fptr));
    printf("%c\t", fgetc(fptr));
    printf("%c\t", fgetc(fptr));
    printf("%c\t", fgetc(fptr));
    printf("%c\t", fgetc(fptr));
    
    
    fclose(fptr);

    return 0;
}