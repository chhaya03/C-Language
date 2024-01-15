#include<stdio.h>
int main(){
   int num,i;

   printf("enter for num=");
   scanf("%d",&num);

   for(i=num;i>0;i--){
    printf("%d\n",i);
   }
   return 0;
}