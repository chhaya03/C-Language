#include<stdio.h>

int main(){

    int i,n,k,j;

    printf("enter for number=");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for(k=1;k<=n;k++){

            printf("  *");

        }
        printf("\n");
    }

    return 0;
}