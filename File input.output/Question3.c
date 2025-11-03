//Make a program to read 5 integers from a file

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("sample.txt", "r");


    int num;
    fscanf(fptr, "%d", &num);
    printf("1st integer is %d\n", num);

    fscanf(fptr, "%d", &num);
    printf("2st integer is %d\n", num);

    fscanf(fptr, "%d", &num);
    printf("3rd integer is %d\n", num);

    fscanf(fptr, "%d", &num);
    printf("4th integer is %d\n", num);

    fscanf(fptr, "%d", &num);
    printf("5th integer is %d\n", num);

    fclose(fptr);
    return 0;
}