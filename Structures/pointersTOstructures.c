#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1 = {"Adarsh", 825090, 9.8};

    struct student *ptr = &s1;//Storing the value of s1 at pointer
    printf("Student roll  no = %d", (*ptr). roll);

    return 0;
}