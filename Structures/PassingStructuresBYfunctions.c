#include<stdio.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {"Adarsh", 825090, 9.8};
    printInfo(s1);

    return 0;
}

void printInfo(struct student s1){
    printf("Student's Informations are mentioned below\n");
    printf("Student name is %s\n", s1.name);
    printf("Student roll is %d\n", s1.roll);
    printf("Student cgpa is %f\n", s1.cgpa);
}