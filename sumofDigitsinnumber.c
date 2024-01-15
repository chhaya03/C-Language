#include<stdio.h>
int main(){
    int n,sum=0,remainder;

    printf("enter for number=");
    scanf("%d",&n);

    while(n>0){

        remainder=n%10;
        sum=sum+remainder;
         n=n/10;
    }
    printf("Digits in number =%d",sum);

    return 0;
}