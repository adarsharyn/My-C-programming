// Q. Create a structure to store complex numbers use arrow operator(->).

#include<stdio.h>

struct complexNo{
    int real;
    int imaginary;
};

int main(){
    struct complexNo n1 = {3, 7};
    struct complexNo *ptr = &n1;
    printf("Real part is %d\n", ptr->real);
    printf("Imaginary parts is %d\n", ptr->imaginary);

return 0;
}