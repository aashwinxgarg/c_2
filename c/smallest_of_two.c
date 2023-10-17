#include<stdio.h>
int main() {
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d\n%d",&a,&b);
    if(a>b){
        printf("%d is smaller one\n",b);
    }
    else {
        printf("%d is the smaller one\n",a);
    }
}