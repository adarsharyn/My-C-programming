#include<stdio.h>
int sum(int a, int b);
void printTable (int n);

int main(){
    int n;
    printf("Enter n");
    scanf("%d", &n);

    printTable(n); //Argument
return 0;
}

int sum(int x, int y) {
return 0;
}

void printTable(int n){ //Parameter
    for(int i=1; i<=10; i++){
        printf("%d\n", i*n);

    }
}