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
    for(int i=0;i<500;i++){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            count++;
        }
        ch=fgetc(fptr);
    }
    

    fclose(fptr);
    fptr=fopen("vowels.txt","w");
    fprintf(fptr,"%d",count);
    fclose(fptr);

    return 0;
}