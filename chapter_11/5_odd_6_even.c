#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    // printf("%d\n",ptr[1]);
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;
    for(int i=0;i<5;i++){
        printf("%d\t",ptr[i]);
    }
    ptr=realloc(ptr,6);
    ptr[0]=12;
    ptr[1]=10;
    ptr[2]=8;
    ptr[3]=6;
    ptr[4]=4;
    ptr[5]=2;
    printf("\n");
    for(int i=0;i<6;i++){
        printf("%d\t",ptr[i]);
    }
    return 0;
}