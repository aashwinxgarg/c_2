#include<stdio.h>
#include<math.h>
int main() {
    int x;
    printf("enter number : ");
    scanf("%d",&x);
    printf("%d\n", x % 2==0);
    // even --> 1
    // odd --> 0
    return 0;
}