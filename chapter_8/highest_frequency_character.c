#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char str[]="aashwin garg",c;
    int count=0;
    char coun[100];
    for(int i=0;str[i]!='\0';i++)
    {
        count=0;
        for(c='a';c<='z';c++)
        {
            if(c==str[i])
            {
                count++;
            }
        }
        coun[i]=count;
    }
    //printf("%d",coun[20]);
    return 0;
}