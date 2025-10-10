#include<stdio.h>

int main(){



int *ptr;
int x;

ptr = &x;
*ptr = 0;

printf("1)x = %d\n", x);//x=0
printf("2)ptr = %d\n", *ptr);


*ptr +=5;
printf("2)x = %d\n",  x);//x=5
printf("2)ptr = %d\n", *ptr);

//increment function
(*ptr)++;
printf("3)x =%d\n", x);//x=6
printf("3)ptr = %d\n",  *ptr);

return 0;
}