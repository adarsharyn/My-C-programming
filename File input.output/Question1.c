//Q.Make a program to read 5 integers from a file.

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("sample.txt", "r");

    int num;
    fscanf(fptr, "%d", &num);
    printf("%d\n", num);

    fscanf(fptr, "%d", &num);
    printf("%d\n", num);

    fscanf(fptr, "%d", &num);
    printf("%d\n", num);

    fscanf(fptr, "%d", &num);
    printf("%d\n", num);

    fscanf(fptr, "%d", &num);
    printf("%d\n", num);

    fclose(fptr);

    return 0;
}