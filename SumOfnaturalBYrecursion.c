#include<stdio.h>

int sum(int n);

int main(){

    int n;

    printf("enter number=");
    scanf("%d",&n);
    
    printf("sum of natural numbers=%d",sum(n));
    return 0;
}

//recursive function

int sum(int n){

    if(n==1){
        return 1;
    }


    int sumN1=sum(n-1)+n;   //sum of n to 1
   // int sumN=sumN1+n;      // sum of n  
}