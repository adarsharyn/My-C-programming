#include<stdio.h>
int main(){
    int marks[5];

    //input
    int *ptr = &marks[0];
    for(int i=0; i<5; i++){
        printf("Enter marks : ", i );
        scanf("%d", &marks[i]);
    }

    //output
    for(int i=0; i<5; i++){
    printf("marks (%d) = %d\n", i, marks[i]);
    }

    return 0;

}