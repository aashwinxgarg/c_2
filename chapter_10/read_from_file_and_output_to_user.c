#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    FILE *fptr;
    fptr=fopen("reading.txt","r");
    char ch;
    ch=fgetc(fptr);
    for(;ch!=EOF;){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    return 0;
}