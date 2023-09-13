#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    FILE *fptr;
    fptr=fopen("Test.txt","w");
    if(fptr==NULL){
        printf("file doesnot exist\n");
    }else{
        fclose(fptr);
    }
    return 0;
}