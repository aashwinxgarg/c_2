#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
   int *ptr;
   ptr=calloc(5,sizeof(int));
   printf("enter n: ");
   for(int i=0;i<5;i++){
    scanf("%d",&ptr[i]);
   }

   //print
   for(int i=0;i<5;i++){
    printf("%d\t",ptr[i]);
   }
    return 0;
}