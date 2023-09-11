#include<stdio.h>
int main() {
    int num;
    printf("Enter the number which is to be checked if it is divisible by 2 or not: ");
    scanf("%d",&num);

    if(num%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}