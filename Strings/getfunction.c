#include<stdio.h>
int main(){
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    //fflush(stdout);
    //getchar();
    return 0;
}