#include<stdio.h>
int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr =  &_age;

    printf("Difference is : %u\n", ptr -_ptr);//Output gives the integral differnce
    ptr = &_age;//Storing the value of _ptr in ptr
    printf("comparision = %u\n", ptr == _ptr);//Where 0 means false and 1 means true
    return 0;
}