#include<stdio.h>
int func(int a){
    int b = a*a*a;
    return b;
}
int main() {
    printf("%d",func(2));
}