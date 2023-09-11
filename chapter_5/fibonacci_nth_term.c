#include<stdio.h>

int fibonacci(int a);

int main() {
    int a=10;
    printf("%d",fibonacci(9));
}

int fibonacci(int a){
    if(a==0){
        return 0;
    }
    if(a==1){
        return 1;
    }
    int am2=fibonacci(a-2);
    int am1=fibonacci(a-1);
    int fibon=am1+am2;
    return fibon;
}