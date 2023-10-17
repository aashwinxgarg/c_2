#include<stdio.h>
int main() {
    int a,b;
    printf("Input the sides of rectangle : ");
    scanf("%d\n%d",&a,&b);
    int area = 2*(a+b);
    printf("The perimeter of the rectangle is : %d\n",area);
    return 0;
}