#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    FILE *fptr;
    fptr=fopen("replacing.txt","r");
    int a,b;
    fscanf(fptr,"%d",&a);
    printf("%d",a);
    fscanf(fptr,"%d",&b);
    int sum=a+b;

    fclose(fptr);
    fptr=fopen("replacing.txt","w");
    fprintf(fptr,"%d",sum);
    return 0;
}