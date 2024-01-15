#include<stdio.h>
int main(){

    int num,i,factorial,sum=0,remainder,temp;

    printf("enter for number=");
    scanf("%d",&num);

    temp=num;

    while(num>0){

        i=1;factorial=1;
        remainder=num%10;

        while(i<=remainder){

            factorial=factorial*i;
            i++;
        }
        sum=sum+factorial;
        num=num/10;
    }


    if(sum==temp){
        printf("%d is strong number",temp);
    }
    else{
        printf("%d is not strong number",temp);
    }


    return 0;
}