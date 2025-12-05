#include<stdio.h>
int main(){
    float avg = 0;
    int sum = 0;
    int marks[5];

    for(int i=0; i<=4; i++){
        printf("Enter Marks\t");
        scanf("%d", &marks[i]);
    }

    for(int i=0; i<4; i++){
        sum = sum + marks[i];
        avg = sum / 5.0;

        
    }

   printf("Avg is %f\n", avg);
return 0;
}