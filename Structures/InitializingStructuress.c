#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1 = {"Adarsh", 825090, 9.8};
    printf("Student name is %s\n", s1.name);
    return 0;
}