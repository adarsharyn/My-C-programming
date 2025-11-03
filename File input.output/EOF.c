//EOF stands for end of file

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("sample.txt", "r");

    char ch;
    ch = fgetc(fptr);

    while(ch != EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);

    return 0;
}