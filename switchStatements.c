#include<stdio.h>
int main(){
    int a;

    printf("enter for a=");
    scanf("%d",&a);

   switch(a){
    case 1:
    printf("value is 1");
    break;

    case 2:
    printf("value is 2");
    break;

    default:
    printf("value is not exist");
    }

    return 0;
}