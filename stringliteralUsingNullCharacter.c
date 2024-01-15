#include<stdio.h>

int main(){

    char greetings[]={'C','h','h','a','y','a',' ','m','i','s','h','r','a','\0'};       // \0=null terminating character

    printf("%s\n",greetings);


    // find character

    printf("%c\n",greetings[0]);


    // size of arrays

    printf("%lu\n",sizeof(greetings));


    //size differnce btwn two ways of creating arrays          //output = size is difference both arrays

    char greetings2[]="chhaya mishra!";

    printf("%lu\n",sizeof(greetings));
 
    return 0;

}