#include<stdio.h>
int main(){
    int last,first,n;

    printf("enter for number=");
    scanf("%d",&n);

    last=n%10;

    while(n>=10){

        n=n/10;
    }

    first=n;
    printf("first digit is %d\n last digit is %d\n",last,first);

    return 0;
}