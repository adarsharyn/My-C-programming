#include<stdio.h>

void square(int n);
void _square(int* n);

int main(){
    int number = 4;
    square(number);
    printf("number = %d\n", number);


    _square(&number);
    printf("number = %d\n", number);
    return 0;
}

//call by value
void square(int n) {  //The initial value i.e 4 remains same as it works on the copies that are created it do not effect the real value
    n = n * n;
    printf("square  = %d\n", n);
}

void  _square(int* n){ //call by refrence , pointer function changes the exact value of number and proceed it further
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
}