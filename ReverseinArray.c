#include<stdio.h>

int reverse(int arr[],int n);
void print(int arr[],int n);

int main(){

    int arr[]={1,2,3,4,5,6,7};

     reverse(arr,7);
     print(arr,7);
    
    
    return 0;
}

// function for printing values

void print(int arr[],int n){

    for(int i=0;i<n;i++){

        printf("%d\t",arr[i]);

    }

    printf("\n");
}

// function for values


int reverse(int arr[],int n){

    for(int i=0;i<n/2;i++){

        int firstval=arr[i];
        int secondval=arr[n-i-1];


        arr[i]=secondval;
       arr [n-i-1]=firstval;
       
    }

}