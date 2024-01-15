#include<stdio.h>

int main(){

    char ch;

    printf("enter any character=");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("it is alphabate");
    }
    else{
        printf("it is not alphabte");
    }

    return 0;
}