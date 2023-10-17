#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter the three numbers : ");
    scanf("%d\n%d\n%d",&a,&b,&c);
    int average = (a+b+c)/3;
    printf("The average is : %d\n",average);
    return 0;
}