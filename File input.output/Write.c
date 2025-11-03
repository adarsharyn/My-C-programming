//In write type the prevoius content get erased and the new content we give appeares there.

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("sample.txt", "w");

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');
    
    return 0;
}