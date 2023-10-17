#include<stdio.h>

int dowork(int a , int b,int*j,int*k,int*l);

int main(){
    int a=3,b=5;
    int*x=&a,*y=&b;
    int sum=0,product=0,average=0;
    dowork(a,b,&sum,&product,&average);
    printf("%d\n%d\n%d\n",sum,product,average);
}

int dowork(int a , int b,int*j,int*k,int*l){
    *j=a+b;
    *k=a*b;
    *l=(a+b)/2;
}