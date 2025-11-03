//Make a structure to store Bank Account information of a customer of ABC Bank. Also, make an alias for it.

#include<stdio.h>

typedef struct AccountDetails{
    char name[100];
    int AccountNumber;
    int IFSC;
    char branch[100];
}Details; 

int main(){
    Details D1 = {"Adarsh Aryan", 12345678, 9900, "Purnea"};
    Details D2 = {"Sujal Kumar", 87654321, 8897, "Purnea"};
    
    printf("\n");
    printf("Here are the following details mentioned below of the ABC's Bank Account holder !!\n\n");
    printf("Account details of 1st account holder\n");
    printf("Account holder name is %s\n", D1.name);
    printf("Account Number is %d\n", D1.AccountNumber);
    printf("IFSC Code is %d\n", D1.IFSC);
    printf("Branch is %s\n", D1.branch);
    printf("\n\n");
    printf("Account details of 2nd account holder !!");
    printf("\n");
    printf("Account holder name is %s\n", D2.name);
    printf("Account Number is %d\n", D2.AccountNumber);
    printf("IFSC Code is %d\n", D2.IFSC);
    printf("Branch is %s\n", D2.branch);
    return 0;
}