#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr =(float*) malloc(5*sizeof(float));

    ptr[0] = 2;
    ptr[1] = 3;
    ptr[2] = 7;
    ptr[3] = 9;
    ptr[4] = 4;

    for(int i=0; i<5; i++){
        printf("%f\n", ptr[i]);
    }
    return 0;
}