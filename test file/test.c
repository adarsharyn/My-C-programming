#include<stdio.h>
int main(){
    int cricket[3][2][1];

    printf("Match Records\n");

    for(int i=0; i<3; i++){
        printf("Tournament %d: \n", i+1);

        for(int j=0; j<2; j++){
            printf("Over %d: \n", j+1);

            for(int k=0; k<1; k++){
                printf("Runs: ", k+1);
                scanf("%d", &cricket[i]);
                printf("wickets: ", k+1);
                scanf("%d", &cricket[i]);
            }
        }
    }

    return 0;
}