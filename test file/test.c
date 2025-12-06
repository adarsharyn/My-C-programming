#include<stdio.h>
int main(){
    int n;
    printf("How many Students ??\n");
    scanf("%d", &n);
    
    char name[n][50];
    printf("Enter Name\n");

    for(int i=0;i<=n;i++){
        printf("%c", i+1);
        fgets(name[i], sizeof(name[i]), stdin);
    }

    printf("\nYou Entered\n");
    for(int i=0; i<=n; i++){
        printf("%d.%s", i+1, name[i]);
    }
    return 0;
}