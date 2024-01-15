#include<stdio.h>

void printHw(int count);

int main(){
    int count;

    printHw(6);

    return 0;
}

void printHw(int count){
    
    if(count==0){     //base case
        return;
    }

    printf("hello world\n");
    printHw(count-1);
}