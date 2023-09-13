#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int *ptr,n;
    printf("enter n: ");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    // calloc initialises with 0;

    free(ptr);

    ptr=(int *)calloc(2,sizeof(int));
    for(int i=0;i<2;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}