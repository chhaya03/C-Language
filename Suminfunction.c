#include<stdio.h>

int printsum(int a,int b);

int main(){

    int a,b;
    printf("enter for a=");
    scanf("%d",&a);
    printf("enter for b=");
    scanf("%d",&b);

   int s=sum( a,b); 
    printf("sum=%d",s);
   
    return 0;
}

int sum(int a,int b){

    return a+b;

}