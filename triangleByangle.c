#include<stdio.h>
int main(){
 int angle;

 printf("enter for angle=");
 scanf("%d",&angle);

 if(angle>0 && angle<=60){
    printf("this is acute angle");
 }
 else if(angle<90){
    printf("this is right angle");
 }
 else if(angle>90 && angle<180){
    printf("this is obtus angle");
 }
 else if(angle==180){
    printf("this is straight angle");
 }
 else if(angle>180 && angle<360){
    printf("this is reflex angle");
 }
 else if(angle==360){
    printf("this is complete angle");
 }
 else{
    printf("this is not valid for angle");
 }
 return 0;
}