//Take 5 students name as input and record marks of 3 subjects 
#include<stdio.h>
int main(){
    int marks[3][3];
    int sum;
    printf("Enter marks of 5 students in 3 subjects\n");
    for(int i=0; i<3; i++){
        printf("Student %d:\n",i+1);
        int sum=0;
    for(int j=0; j<3; j++){
        printf("Subject %d :", j+1);
        scanf("%d", &marks[5][3]);
        sum+=marks[i][j];
    }
}
    printf("Student 1 is topper : %d", sum);
        sum = marks[i][j];
    return 0;
}