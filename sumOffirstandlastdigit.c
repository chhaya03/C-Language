#include<stdio.h>
int main(){
    int n,sum=0,first,last;

    printf("enter for number=");
    scanf("%d",&n);

    last=n%10;
    while(n>=10){

        n=n/10;
        
    }
    first=n;

    printf("first digit=%d\n last digit=%d\n",first,last);

    sum=first+last;
    printf("first + last=%d",sum);

    return 0;

    
}