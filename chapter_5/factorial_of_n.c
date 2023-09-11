#include<stdio.h>

int factorial(int a);

int main() {
    printf("%d",factorial(6));
    return 0;
}

int factorial(int a){
    if(a==1){
        return 1;
    }
    int fact=factorial(a-1)*a;
    return fact;    
}