#include<stdio.h>
int main(){

    int day;

    printf("enter for day=");
    scanf("%d",&day);

    switch(day){

        case 1:
        printf("it is monday");
        break;

        case 2:
        printf("it is tuesday");
        break;

        case 3:
        printf("it is wednesday");
        break;

          case 4:
        printf("it is thursday");
        break;

          case 5:
        printf("it is friday");
        break;

          case 6:
        printf("it is saturday");       
        break;

          case 7:
        printf("it is sunday");
        break;

        default:
        printf("Nothing macthed");

    }
    return 0;
}