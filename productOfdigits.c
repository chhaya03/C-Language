#include<stdio.h>
int main(){
    int product=1,n,remainder;

    printf("enter for number=");
    scanf("%d",&n);

    while(n>=1){

        remainder=n%10;
        product=product*remainder;
        n=n/10;
    }
    printf("product of digits=%d",product);


    return 0;
}