#include<stdio.h>
void PrintHello(int count);

int main(){
PrintHello(1000000000);
return 0;
}
//recursive

void PrintHello(int count){
    if (count == 0){
        return;
    }

printf("Hello\n");
PrintHello(count);



}