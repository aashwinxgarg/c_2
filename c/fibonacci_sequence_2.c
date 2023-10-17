#include<stdio.h>

int main() {
    int n=5,c=0;
    int a=0,b=1;
    printf("0\n");
    for(int i =1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("fib sequence %d\n",c);
    }
    return 0;
}