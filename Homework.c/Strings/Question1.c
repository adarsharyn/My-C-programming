//Q. Make a program that inputs user's name & print its length

#include<stdio.h>
int printCount(char array[]);
void printString(char array[]);

int main(){
char name[100];
fgets(name, 100, stdin);

printf("Length is : %d", printCount(name));
return 0;
}

void printString(char array[]){
for(int i=0; array[i] !='\0'; i++){
printf("%c ", array[i]);
}

printf("\n");

}
int printCount(char array[]){
    int count=0;
    for(int i=0; array[i]!='\0'; i++){
    count++;
}
return count-1;
}