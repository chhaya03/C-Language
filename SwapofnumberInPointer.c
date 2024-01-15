#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int a,b;
    printf("enter for a=");
    scanf("%d",&a);
    printf("enter for b=");
    scanf("%d",&b);
     
     swap(a,b);

     printf("a=%d,b=%d\n",a,b);


     _swap(&a,&b);
     printf("a=%d,b=%d\n",a,b);




    return 0;

}

void swap(int a,int b){

    int t=a;
        a=b;
        b=t;
}

void _swap(int *a,int *b){

    int  t=*a;
        *a=*b;
        *b=t;
}

