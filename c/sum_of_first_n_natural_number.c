#include<stdio.h>

int sum();

int main() {
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("The sum of first %d natural numbers are : %d\n",a,sum(a));
    return 0;
}

int sum(n) {
    int summ=0,count=0;
    for(int i=0;i<=n;i++){
        summ=summ+i;
        count++;
    }
    return summ;
}