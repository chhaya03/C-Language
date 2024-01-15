#include<stdio.h>

int main(){

    char greetings[]="hello world:)";        //using strings


    printf("%s\n",greetings);

    // if i want to find characters

    printf("characters:\n");

    printf("%c\n",greetings[0]);          // 0-based indexing
    printf("%c\n",greetings[1]);
    printf("%c\n",greetings[2]);
    printf("%c\n",greetings[3]);


    // if i change value of specific caharacters

    printf("update character=\n");

    greetings[0]='j';

    printf("%s",greetings);




    return 0;
}


