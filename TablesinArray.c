#include<stdio.h>

void storetable(int arr[][10],int n,int number,int m);

int main(){

    int tables[2][10];

     storetable(tables,0,2,10);
     storetable(tables,1,3,10);


     for(int i=0;i<10;i++){
        printf("%d\t",tables[0][i]);
    }
    
    printf("\n");

     for(int i=0;i<10;i++){

        printf("%d\t",tables[1][i]);
    }


    


    return 0;
}



void storetable(int arr[][10],int n,int number,int m){

    for(int i=0; i<m; i++){  // 0 to 10

        arr[n][i]=number*(i+1);
    }
}