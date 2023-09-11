#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char str[]="HelloWorld";
    char ch='L';
    int flag=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            flag=1;
        }
        else{
            continue;
        }
    }
    printf("%d",flag);
    return 0;
}