#include<stdio.h>
int main() {
    int i=0,N,sum=0;
    printf("Enter the number upto which you want to sum : ");
    scanf("%d",&N);
    while(i<=N) {
        sum+=i;
        i++;
    }
    printf("The sum of first %d natural numbers is %d\n",N,sum);
    return 0;
}