#include<stdio.h>

int main(){
   int marks1 = 97;
   int marks2 = 98;
   int marks3 = 99;

   // int marks [3] = {97,98,99};
   // printf("%d", marks[0]);//if you want first number as output then enter (0) and if want second enter (2) and if third enter (2) because c c++ nd python is o based indexing language 
    int marks [3];
    printf("Enter phy marks : ", marks1);
    scanf("%d", &marks[0]);

    printf("Enter maths marks : ", marks2);
    scanf("%d", &marks[1]);
    
    printf("Enter English marks : ", marks3);
    scanf("%d", &marks[2]);
    
    printf("phy = %d, maths = %d, English = %d", marks[0], marks[1], marks[2]);
    
    return 0;
}