#include<stdio.h>
#include<string.h>
#include<math.h>

void func(char arr[]);

int main()
{
    char str[]="helloworld";
    func(str);
    return 0;
}

void func(char arr[]) {
    int count=0, length=strlen(arr);
    for(int i=0;i<length;i++){
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
            count++;
        }
    }
    printf("%d",count);
}