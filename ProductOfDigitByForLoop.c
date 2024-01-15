#include<stdio.h>
int main(){
    int i,n,remainder,product=1;

    printf("enter for number=");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        remainder=n%10;
        product=remainder*product;
        n=n/10;
    }
    n=product;
    printf("product of digits=%d",product);

    return 0;
}