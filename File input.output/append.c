//In append type, contents get edited as perr our desire previous content remains same 

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("sample.txt", "a");

    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'p');
    fprintf(fptr, "%c", 'p');
    fprintf(fptr, "%c", 'l');
    fprintf(fptr, "%c", 'e');

    fclose(fptr);

    return 0;
}