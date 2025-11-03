//This file.c has been generated to read the characters stored in sample.txt

#include<stdio.h>

int main(){
    FILE *fptr;//FILE type k ek pointer declare kr diya 
    fptr = fopen("sample.txt", "r");/* to open file we use fopen. fopen takes 2 parameters {1.filename and 2.mode}. MODE= what you want to do
                                       either you want to read it or edit it or write it . fopen ne file ka ek pointer return kr diya hoga 
                                       jo ki fptr ne store kr liya hoga */ 
    
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("1st Character is %c\n", ch);
    
    fscanf(fptr, "%c", &ch);
    printf("2nd Character is %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("3rd Character is %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("4th Character is %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("5th Character is %c\n", ch);
    
    fclose(fptr);

    return 0;
}