#include<stdio.h>
int main() {
    int n;
    printf("Enter the number to be cubed: ");
    scanf("%d",&n);

    int cube=n*n*n;

    printf("cube of the number %d is %d\n",n,cube);
}