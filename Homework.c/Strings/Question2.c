#include<stdio.h>
#include<string.h>

int main(){
   char name[30];
   fgets(name, 100, stdin);
   scanf("%c", &name);
   
   printf(" %c ", name);
   return 0;
}