#include<stdio.h>
int main() {
    int n,flag=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i = 2;i<n;i++){
        if(n%i==0) {
            flag = 0;
            break;
        }
    }
    printf("%d",flag);
}