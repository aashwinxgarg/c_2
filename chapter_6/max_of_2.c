#include<stdio.h>

void maxim(int a, int b, int *max);

int main() {
    int a=200,b=40,max;
    maxim(a,b,&max);
    printf("%d",max);
}

void maxim(int a, int b, int *max) {
    if(a>b){
        *max=a;
    }else{
        *max=b;
    }
}