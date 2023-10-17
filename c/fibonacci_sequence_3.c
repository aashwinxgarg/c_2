#include<stdio.h>
#include<math.h>

int fib(int n);

int main() {
    fib(5);
    printf("hey %d",fib(5));
    return 0;
    
}

int fib(int n) {
    if(n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int f=fib(n-1)+fib(n-2);
    printf("%d\n",f);
    return f;
    
}