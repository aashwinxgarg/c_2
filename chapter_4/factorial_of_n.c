#include<stdio.h>
int main() {
    int n,fac=1;
    printf("enter number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        fac*=i;
    }
    printf("%d",fac);
}