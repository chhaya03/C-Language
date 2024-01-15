#include<stdio.h>

struct mystructure{

    int mynum;
    char myletter;
    char string[30];
};

int main(){

    struct mystructure s1;

    s1.mynum=50;
    s1.myletter='j';

    strcpy(s1.string,"chhaya mishra");           // declare string using strcpy function to assign value

    printf("%d %c %s",s1.mynum,s1.myletter,s1.string);


   return 0;
}

