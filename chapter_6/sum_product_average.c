#include<stdio.h>

void work(int a, int b, int *sum, int *prod, int *avg);

int main() {
    int a=3,b=5,sum,prod,avg;
    work(a,b,&sum,&prod,&avg);
    printf("sum is %d \nprod is %d \navg is %d\n",sum,prod,avg);
}

void work(int a, int b, int *sum, int *prod, int *avg) {
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}