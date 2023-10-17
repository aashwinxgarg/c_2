#include<stdio.h>

int calc(int n);

int main() {
    int a = 123456789;
    printf("%d\n",calc(a));
    return 0;
}

int calc(int n){
    int duplicate=n,count=0,duplicate_2=n,temp,sum=0;
    for(int i=0;duplicate!=0;i++){
        temp=duplicate%10;
        sum+=temp;
        duplicate=duplicate/10;
    }
    return sum;
}