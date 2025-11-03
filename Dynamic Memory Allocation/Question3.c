//Q. Allocate memory for 5 numbers . Then dynamically increase it to 8 numbers

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter Number ");
    for(int i=0; i<6; i++){
        scanf("%d", ptr[i]);
    }
    
    ptr = realloc(ptr, 8);
    printf("Enter number ");
    for (int i= 0; i<9 ; i++){
        scanf("%d\n",ptr[i]);
    }

    return 0;
}