//Q. Create a structure to store vectors. Then make a function to return sum of 2 vectors

#include<stdio.h>

struct vector {
    int x;
    int y;
};

void calcSum(struct vector v1, struct vector v2, struct vector sum);

int main(){
    int vector;
    struct vector v1 = {5,10};
    struct vector v2 = {15,79};
    struct vector sum = {0};

    calcSum(v1, v2, sum);
    return 0;
}

void calcSum(struct vector v1, struct vector v2, struct vector sum){

    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Vector sum of x component is %d\n", sum.x);
    printf("Vector sum of y component is %d\n", sum.y);
}