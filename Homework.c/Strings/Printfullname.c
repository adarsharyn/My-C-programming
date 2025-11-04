#include<stdio.h>
void printstring(char array[]);

int main(){
    
    char firstname[] = "ADARSH";
    char lastname [] = "ARYAN";

    printstring(firstname);
    printstring(lastname);
    
    return 0;
}

void printstring(char array[]){
    for(int i=0; array[i]!= 0; i++){
        printf("%c", array[i]);
    }
    printf("\t");
}