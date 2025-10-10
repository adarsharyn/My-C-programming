/*The code mentioned below can be executed by two methods :
1st - If we initialize it in the first step
2nd - If we don't initialize it in the first step and remove the commenting from the print and scan syntax*/
#include<stdio.h>
int main(){
    float price[3] = {100.0,200.0,300.0};
    
   // printf("Enter your 3 prices: ");
   // scanf("%f", &price[0]); 
   // scanf("%f", &price[1]); 
   // scanf("%f", &price[2]); 


    printf("Total price of 1st item including GST (i.e = 18 percent) is : %f\n", price[0]+(price[0]*0.18));
        printf("Total price of 2nd item including GST is (i.e = 18 percent) : %f\n", price[1]+(price[1]*0.18));
            printf("Total price of 3rd item including GST (i.e = 18percent) is : %f\n", price[2]+(price[2]*0.18));


    return 0;
}
