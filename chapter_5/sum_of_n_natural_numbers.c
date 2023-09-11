#include<stdio.h>

int fun(int a);

int main() {
    int a;
    printf("enter a: ");
    scanf("%d",&a);
    int sum=fun(a);
    printf("%d",sum);
    return 0;
}

int fun(int a) {
    if(a==1){
        return 1;
    }
    int summ=fun(a-1);
    int sum= summ+a;
    return sum;
}