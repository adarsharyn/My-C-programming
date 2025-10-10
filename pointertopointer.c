#include<stdio.h>

int main(){
    int i = 5;
    int *ptr = &i;//Give the value stored at i.
    int **pptr = &ptr;//Double star gives the value stored at i where if we use single star it only gives the value which is stored at ptr.

    printf("Value of i is %d\n", (**pptr));
    
    
    return 0;
}