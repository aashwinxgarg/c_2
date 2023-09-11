#include<stdio.h>
int countt(int arr[], int total){
    int count=0;
    for(int i =0;i<total;i++){
        if(arr[i]%2==0){
            continue;
        }
        else{
            count++;
        }
    }
    return count;
}
int main() {
    int arr[]={101,103,105,107,109,111,113,115,117,119,120};
    
    printf("%d",countt(arr,11));
}


