#include<stdio.h>
int main() {
    int num,h;
    printf("Enter the number to be reversed : ");
    scanf("%d",&num);
    while (num > 0) {
        h=num%10;
        num/=10;
        printf("%d",h);
    }
    printf("\n");
    return 0;
}