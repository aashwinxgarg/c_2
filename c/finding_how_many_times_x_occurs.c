#include<stdio.h>

int main(){
    int a = 3,count=0;
    int arr[]={1,2,2,2,2,2,2,2,3,3,3,3,3,3};
    for(int i =0;i<15;i++){
        if(arr[i]==a){
            count +=1;
        }
    }
    printf("%d",count);
}