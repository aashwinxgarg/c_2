#include<stdio.h>

int main() {
    int a=0,b=1,input=6;
    printf("0\n1\n");
    for(int i =0;i<input-2;i++){
        int c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}