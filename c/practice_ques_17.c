//Keep taking numbers as input from user until user enters an odd number.
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number 1th time: ");
    scanf("%d",&n);
    for (int i = 2;n%2==0;i++){
        printf("Enter the number %dth time : ",i);
        scanf("%d",&n);
    }
    printf("You have entered odd number which is %d",n);
}