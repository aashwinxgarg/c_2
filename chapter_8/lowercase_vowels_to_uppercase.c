#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char str[]="abhishek sachdeva";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'){
            str[i]='A';
        }
        if(str[i]=='e'){
            str[i]='E';
        }
        if(str[i]=='i'){
            str[i]='I';
        }
        if(str[i]=='o'){
            str[i]='O';
        }
        if(str[i]=='u'){
            str[i]='U';
        }
    }
    printf("%s",str);
    return 0;
}