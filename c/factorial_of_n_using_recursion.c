#include<stdio.h>

int factorial(int n);

int main() {
    printf("%d\n",factorial(5));
    return 0;
}

int factorial(int n) {
    if(n==1){
        return 1;
    }
    int facn=factorial(n-1)*n;
    return facn;
}