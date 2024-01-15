#include<stdio.h>
int main(){
    char ch;

    printf("enter any character=");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("%c is uppercase of alphabates");
    }
    else if(ch>='a' && ch<='z'){
        printf("%c is lowercase");
    }
    else{
        printf("nothing matched");
    }

    return 0;
}