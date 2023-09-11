#include<stdio.h>
int sum(int n);

int main() {
    printf("%d",sum(123));
    return 0;
}

int sum(int n) {
    int a=n,temp,sum=0;
    for(int i=0;a!=0;i++){
        temp=a%10;
        a=a/10;
        sum+=temp;
    }
    return sum;
}