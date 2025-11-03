//Q. Make a program to input student information from a user & enter it to a file.

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("student detail", "w");

    char name[100];
    int roll;
    float marks;

    printf("Enter Student name ");
    scanf("%s", name);

     printf("Enter roll number ");
    scanf("%d", &roll);

     printf("Enter cgpa ");
    scanf("%f", &marks);

    fprintf(fptr, "%s\n", name);
    fprintf(fptr, "%d\n", roll);
    fprintf(fptr, "%f\n", marks);
    
    
    fclose(fptr);

    return 0;
}