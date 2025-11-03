//Doing question 2 with differnt method taking input from user
#include<stdio.h>

typedef struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
}adds;

void printAdd(struct address add);

int main(){
    adds [5];
    //input
    printf("Enter information of 1st person");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

     printf("Enter information of 2nd person");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

     printf("Enter information of 3rd person");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

     printf("Enter information of 4th person");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

     printf("Enter information of 5th person");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);
     
    printAdd(adds[0]);
    printf("\n\n");
    printAdd(adds[1]);
    printf("\n\n");
    printAdd(adds[2]);
    printf("\n\n");
    printAdd(adds[3]);
    printf("\n\n");
    printAdd(adds[4]);
    return 0;
}

void printAdd(struct address add){
    printf("%d, %d, %s, %s", add.houseNo, add.block, add.city, add.state);
}