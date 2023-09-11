#include<stdio.h>

void printarray(int carr[]);
void storetable(int arr[][10],int a,int b);

int main() {
    int arr[2][10];
    int a=2,b=3;
    
    storetable(arr,2,0);
    storetable(arr,5,1);
    printarray(arr[0]);
    printf("\n");
    printarray(arr[1]);
}

void printarray(int carr[]) {
    for(int i=0;i<10;i++){
        printf("%d\t",carr[i]);
    }
}
void storetable(int arr[][10],int a,int b){
    for(int i=1;i<=10;i++){
        arr[b][i-1]=a*i;
    }
}