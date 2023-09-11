#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char str[]="aashwin garg, abhishek sachdeva, adarsh gaur, aastik sharma.";
    char newstr[100];
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            printf("%c",str[i]);
        }
    }
    printf("%s",newstr);
    return 0;
}