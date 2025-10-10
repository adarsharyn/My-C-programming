#include<stdio.h>
#include<math.h>

int sum(int n);

int main(){
printf("Your Sum is %d", sum(1000));
return 0;

}


// Recursive function
 int sum(int n){
     if(n==1){
     return 1; // Base case
     }
 
 
 int sumNm1 = sum(n-1);// sum of number from 1 to n-1
 int sumN = sumNm1+n; // sum of number from 1 to n and n // final ans will come
 return sumN;
}