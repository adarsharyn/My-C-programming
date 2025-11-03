/*Typedef Keyword !!
Typedef Keywords are used tp create alias(Nicnames) of data types which make it more convinient to understand it. Usually Typedef keywords 
are used with struct data types because in many cases they can be leanthy. Data types like int,float,char are already very consise therefore
generaally we don't use Typedef Keywords for them.*/ 

#include<stdio.h>

typedef struct computerengeneeringstudent{
    char name[100];
    int roll;
    float cgpa;
} coe;//computerengeneeringstudent nikname has been declared as coe.

int main(){
  coe s1 = {"Adarsh", 825090, 9.7};

  printf("Student name is %s\n",s1.name);
  printf("Student roll no is %d\n",s1.roll);
  printf("Student cgpa is %f\n",s1.cgpa); 

  return 0;
}