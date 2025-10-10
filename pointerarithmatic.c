#include<stdio.h>
int main(){
    char star = '*';
    char *ptr = &star;
    
    printf("pointer is : %u\n", ptr);

    ptr++;
    printf("Pointer is : %u\n", ptr);

    ptr = ptr+2;
    printf("Pointer is : %u\n", ptr);

    return 0;
}