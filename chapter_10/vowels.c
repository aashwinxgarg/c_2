#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    FILE *fptr;
    fptr=fopen("vowels.txt","r");
    char ch;
    ch=fgetc(fptr);
    int count=0;
    for(;ch!=EOF;){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            count+=1;
            ch=fgetc(fptr);
        }
    }
    
    printf("%d",count);

    fclose(fptr);
    return 0;
}