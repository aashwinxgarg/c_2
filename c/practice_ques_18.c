//Keep taking numbers as input from user until user enters a number which is multiple of 7.
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number 1th time : ");
    scanf("%d",&n);
    for(int i = 2;n%7!=0;i++){
        printf("Enter a number %dth time : ",i);
        scanf("%d",&n);
    }
    printf("Thankyou! You have entered the number : %d\n",n);
}