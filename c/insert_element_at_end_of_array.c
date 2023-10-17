#include<stdio.h>
int main() {
    int arr[]={1,2,3,4,5,123,123,123};
    int a = 120;
    int c=sizeof(arr)/4;
    //printf("%d",c);
    arr[c]=a;
    printf("%d",arr[8]);
}