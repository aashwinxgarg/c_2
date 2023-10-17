#include<stdio.h>
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,1540},max=0;
    for(int i = 0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
}