//This newfile.c has been generated to read the integers stored in sample.txt

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("sample.txt", "r");


    int num;
    fscanf(fptr, "%d", &num);
    printf("Integer is %d", num);

    fclose(fptr);
    return 0;
}