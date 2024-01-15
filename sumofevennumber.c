#include<stdio.h>
int main(){
    int n,sum=0,i;

    printf("enter for n=");
    scanf("%d",&n);

    for(i=2;i<=n;i=i+2){

        sum=sum+i;
   }

   printf("sum of even numbers=%d",sum);
    return 0;
}