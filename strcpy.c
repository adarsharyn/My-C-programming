#include<stdio.h>
#include<string.h>

int main(){
    char oldStr[] = "oldStr";
    char newStr[] = "newStr";

    strcpy(oldStr,newStr);//Here basically strcpy(string copy) copied the value of newStr in oldstr(Jo pichhe likha hota hai mtlb uska value saamne waale m copy ho rha hai)
    puts(oldStr);//Output gives the value of newStr since its value copied to OldStr

    return 0;
}