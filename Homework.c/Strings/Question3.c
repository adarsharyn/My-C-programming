//Q. Write a function to count the occurance of the vowels in a string

#include<stdio.h>
#include<string.h>

int countVowels(char str[]);
int main(){
    char str[100];// "Adarsh";
    fgets(str, 100, stdin);
    
    printf("Vowels are %d", countVowels(str));
}

int countVowels(char str[]){
    int count = 0;

    for(int i=0; str[i]!= '\0'; i++) {
        if(str[i]== 'a' || str[i]== 'A' || str[i]== 'e' ||str[i]== 'E' || str[i]== 'i' || str[i]== 'I' || str[i]== 'o' || str[i]== 'O' ||str[i]== 'u' ||str[i]== 'U'){
            count++;
        }
    }
    return count;
}
