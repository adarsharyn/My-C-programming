#include<stdio.h>

void namaste();
void bonjour();

int main(){
    int ch;
    printf("enter 'i' for indians and 'f' for french");
    scanf("%c", &ch);

    namaste();
}

 void namaste(){
    printf("namaste\n");
    bonjour();
 }

 void bonjour(){
    printf("bonjour\n");
 }