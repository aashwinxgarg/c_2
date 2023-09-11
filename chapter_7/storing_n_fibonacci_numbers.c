#include<stdio.h>
int main() {
    int arr[10]={0,1};
    for(int i=2; i<10;i++){
        arr[i]=arr[i-2]+arr[i-1];
    }
    printf("%d",arr[9]);
}