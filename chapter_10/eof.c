#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    FILE *fptr;
    fptr=fopen("Test.txt","r");

    char ch;
    ch=fgetc(fptr);
    // while(ch!=EOF){
    //     printf("%c",ch);
    //     ch=fgetc(fptr);
    // }
    for(;ch!=EOF;){
        printf("%c",ch);
        ch=fgetc(fptr);
    }


    fclose(fptr);
    return 0;
}