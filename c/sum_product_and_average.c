#include<stdio.h>

int avg(int a,int b);

int main(){
    int x=8,y=9;
    int average = avg(x,y);
    printf("%d",average);
}

int avg(int a,int b){
    int sum = a+b;
    int product=a*b;
    printf("sum = %d, product = %d\n",sum,product);
    int average = (a+b)/2;
    return average;
}