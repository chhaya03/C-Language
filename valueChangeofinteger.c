#include<stdio.h>

int main(){

    int a;

    printf("enter for a=");
    scanf("%d",&a);

    //address stored in pointer

    int *ptr=&a;

    printf("entr for *ptr=");
    scanf("%d",&*ptr);

    printf("a=%d",a);


    return 0;

}