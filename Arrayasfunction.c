#include<stdio.h>
void printNumbers(int array[], int n);

int main(){
    int arr[] = {1,2,3,4,5,6,10};
    printNumbers(arr, 7);
    return 0;
}

void printNumbers(int array[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", array[i]);
    }
   // printf("\n");
}