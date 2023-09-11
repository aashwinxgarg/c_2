#include<stdio.h>
int main() {
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d\n%d",&a,&b);

    if(a>b){
        printf("%d is smaller",b);
    }
    else{
        printf("%d is smaller",a);
    }
}