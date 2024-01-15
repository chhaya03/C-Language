#include<stdio.h>

int sumDigit(int n);

int main(){
    int n;

    printf("enter for number=");
    scanf("%d",&n);

    printf("dum of digit =%d",sumDigit(n));

    return 0;
}

int sumDigit(int n){
    if(n==0){

         return 0;
    }


    return (n%10)+sumDigit(n/10);
   
}