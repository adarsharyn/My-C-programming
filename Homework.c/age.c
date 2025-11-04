#include<stdio.h>
int main(){
    int age;
    printf("Enter age");
    scanf("%d", &age);

    if (age>=18) {
        printf("You are eligible to vote");
    }
    
    else if (age>=0 && age<18){
        printf("Not eligible to vote");
    }

    else {
        printf("Invalid age");
    }

    return 0;
}