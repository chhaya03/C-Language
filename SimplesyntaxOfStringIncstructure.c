#include<stdio.h>

struct mystructure{

    int mynum;
    char myletter;
    char string[30];
};

// simple syntax in C of string

int main(){

    struct mystructure s1={50,'j',"chhaya mishra"};

    // print value

    printf("%d %c %s",s1.mynum,s1.myletter,s1.string);

    return 0;

}