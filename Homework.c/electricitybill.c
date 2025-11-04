#include<stdio.h>
int main(){
    float units;
    printf("Enter unit");
    scanf("%f", &units);

    if(units<=100){
    printf("%f", units*6.50);
    }

    else{
        printf("%f", 100*6.50+ (units-100)*9.0);
    }


return 0;
}