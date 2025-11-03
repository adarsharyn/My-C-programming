// Enter address(house no, block, city, state) of 5 peoples

#include<stdio.h>
#include<string.h>

typedef struct address {
    int house;
    int block;
    char city[100];
    char state[100];
}add;

void PrintInfo(struct address a1);
int main(){
    add a1 = {3, 6, "purnea", "Bihar"};
    add a2 = {4, 7, "Katihar", "Bihar"};
    add a3 = {9, 2, "Bhagalpur", "Bihar"};
    add a4 = {4, 7, "Madhepura", "Bihar"};
    add a5 = {9,8, "Saharsa", "Bihar"};
    
    PrintInfo(a1);
    printf("\n\n");
    PrintInfo(a2);
    printf("\n\n");
    PrintInfo(a3);
    printf("\n\n");
    PrintInfo(a4);
    printf("\n\n");
    PrintInfo(a5);
    return 0;
}

void PrintInfo(struct address a1){
    
    printf("House no is %d\n", a1.house);
    printf("block no is %d\n", a1.block);
    printf("City is %s\n", a1.city);
    printf("state is %s\n",a1.state);
}