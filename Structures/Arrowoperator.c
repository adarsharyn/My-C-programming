//Arrow operators are used just for our simplicity.It is convinient to use and less confusing then this[(*ptr).roll] format.
//pointer is required to impliment Arrow operator
#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
};

int main(){
    struct student s1 = {825090, 9.8};
   
    struct student *ptr = &s1;
    printf("Student roll no is %d\n",ptr->roll );//Using Arrow operator. Arrow operator [(*ptr).roll] iss format se kaaafi simple hai.
    printf("Student cgpa is %f",ptr->cgpa );
    return 0;
}