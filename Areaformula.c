#include<stdio.h>

int squarearea(int side);
int circlearea(int rad);
int rectanglearea(int a, int b);

int num(){
   int a=6;
   int b=7;
    printf("area is %d\n", rectanglearea(a,b));


    return 0;
}

int squarearea(int side){
    return side*side;
}

int circlearea(int rad) {
    return 3.14*rad*rad;
}

int rectanglearea(int a, int b){
    return a*b;
}
