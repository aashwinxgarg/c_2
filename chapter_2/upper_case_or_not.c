#include<stdio.h>
int main() {
    char n;
    printf("enter the character : ");
    scanf("%c",&n);

    printf("%d",n>='A' && n<='Z');
    return 0;
}