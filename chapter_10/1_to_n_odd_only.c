#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    FILE *fptr;
    fptr=fopen("Test.txt","w");
    
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2!=0){
            fprintf(fptr,"%d\t",i);
        }
    }





    fclose(fptr);
    return 0;
}