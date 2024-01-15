#include<stdio.h>

int main(){

    int a,b;

    printf("enter for a=");
    scanf("%d",&a);

    printf("enter for b=");
    scanf("%d",&b);

    int *ptr1=&a;
    int *ptr2=&b;

   int sum=*ptr1+*ptr2;

    printf("%d is sum",sum);

    return 0;


}