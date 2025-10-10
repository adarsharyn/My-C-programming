#include<stdio.h>

int CalcPercentage(int science, int maths, int sanskrit);

int main(){
int science = 98;
int maths = 95;
int sanskrit = 99;

printf("total Percentage is %d", CalcPercentage(science,maths,sanskrit));
return 0;


}

int CalcPercentage(int science, int maths, int sanskrit){
    return ((science+maths+sanskrit)/3);
}