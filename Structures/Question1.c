//Q. Write a program to store the data of 3 students
#include<stdio.h>
#include<string.h>
       
      struct student {
        char name[100];
        int roll;
        float cgpa;
      };

      int main(){
      struct student s1;
      strcpy(s1.name, "Adarsh");
      s1.roll = 825090;
      s1.cgpa = 9.8;
      
      printf("Student's name is %s\n", s1.name);
      printf("Roll no is %d\n", s1.roll);
      printf("Student's cgpa is %f\n", s1.cgpa);
      printf("\n\n\n");

      struct student s2;
      strcpy(s2.name, "Sujal");
      s2.roll = 825080;
      s2.cgpa = 9.6;

      
      printf("Student's name is %s\n", s2.name);
      printf("Roll no is %d\n", s2.roll);
      printf("Student's cgpa is %f\n", s2.cgpa);
      printf("\n\n\n");


      struct student s3;
      strcpy(s3.name, "Piyush");
      s3.roll = 825081;
      s3.cgpa = 9.2;

      printf("Student's name is %s\n", s3.name);
      printf("Roll no is %d\n", s3.roll);
      printf("Students's cgpa is %f\n", s3.cgpa);
      return 0;
      }