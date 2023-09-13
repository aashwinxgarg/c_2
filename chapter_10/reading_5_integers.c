#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    FILE *fptr;
    fptr=fopen("Test.txt","r");

    int ch;
    fscanf(fptr,"%d",&ch);
    // printf("%d\n",ch);
    
    printf("%d\n",ch);
    fscanf(fptr,"%d",&ch);
    printf("%d\n",ch);
    fscanf(fptr,"%d",&ch);
    printf("%d\n",ch);
    fscanf(fptr,"%d",&ch);
    printf("%d\n",ch);
    fscanf(fptr,"%d",&ch);
    printf("%d\n",ch);
    fscanf(fptr,"%d",&ch);

    return 0;
}