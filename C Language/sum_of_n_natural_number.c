#include <stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (i=0;n>=i;i++) {
        sum = sum +i;
    }
    printf("%d\n",sum);
    return 0;
}