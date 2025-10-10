#include<stdio.h>
int main(){
    
    //input
    int n;
    printf("Enter n ");
    scanf("%d", &n);
    //output
    for (int i=1; i<=10; i++){
        printf("%d\n", i*n);
    }


    return 0;
}