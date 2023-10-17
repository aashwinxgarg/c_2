#include<stdio.h>

void swap(int *x,int *y);

int main() {
    int a=3,b=5;
    int *ptr=&a;
    int *pptr=&b;
    swap(ptr,pptr);
    printf("%d %d",a,b);
    return 0;
}

void swap(int *x,int *y){
    int a = *x;
    *x=*y;
    *y=a;
}