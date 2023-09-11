#include<stdio.h>

int po(int a,int b);

int main() {
    printf("%d",po(2,10));
    return 0;
}

int po(int a,int b){
    int c=1;
    for(int i=0;i<b;i++){
        c=c*a;
    }
    return c;
}