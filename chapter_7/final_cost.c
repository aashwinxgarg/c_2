#include<stdio.h>
int main() {
    int arr[]={20,20,60};
    int price=arr[0]+arr[1]+arr[2];
    int final=price+0.18*price;
    printf("%d",final);
}