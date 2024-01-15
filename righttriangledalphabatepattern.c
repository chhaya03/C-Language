#include<stdio.h>
int main(){
    int i,j,n;
    char ch;
    

    printf("enter for number=");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for(j=1;j<=i;j++){

            printf(" %c",ch);
            ch++;
        }
        ch='A';
        
        printf("\n");
    }

    return 0;
}