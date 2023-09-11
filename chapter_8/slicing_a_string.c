#include<stdio.h>
#include<string.h>
#include<math.h>

void slice(char arr[],int n, int m);
int main()
{
    char str[20]="HelloWorld";
    slice(str,3,6);
    //printf("%s",newstr);
    return 0;
}

void slice(char arr[], int n, int m) {
    char newstr[m-n+1];
    for(int i=n;i<=m;i++){
        newstr[i-n] = arr[i];
    }
    newstr[m-n+1]='\0';
    puts(newstr);
    //return newstr;
    
}