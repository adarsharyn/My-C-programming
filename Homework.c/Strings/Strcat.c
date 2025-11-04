#include<stdio.h>
#include<string.h>

int main(){
    char firstStr[100] = "Adarsh";
    char secondstr[] = "Aryan";

    strcat(firstStr, secondstr);
    puts(firstStr);
    
    return 0;
}