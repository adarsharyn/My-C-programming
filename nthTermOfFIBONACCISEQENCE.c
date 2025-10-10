/*fibonacci sequence = 0,1,1,2,3,5,8,13,21,34,55,...........
sum of 1st two no will be the third number*/
#include<stdio.h>

int fib(int n);

int main(){
printf("%d\n", fib(8));
}


int fib(int n){
    if(n==0){
        return 0; 
    }
    if(n==1) {
        return 1;
    }

    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1+fibNm2;
    //printf("fib of %d is %d", n,fibN);
    return fibN;
}