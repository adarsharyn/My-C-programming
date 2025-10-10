#include<stdio.h>
#include<math.h>

int fact(int n);

int main(){
printf("Your factorial is %d", fact(5));
return 0;

}

//Recursive function
int fact(int n){
if (n == 1){
return 1; // Base case
}

int fact(int n);
int factNm1 = fact(n-1); //factoral of 1 to n-1 will be calculated
int factN = factNm1*n;// final factorial will be calculted

return factN;

}