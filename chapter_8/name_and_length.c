#include<stdio.h>
int work(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}
int main() {
    char str[50];
    fgets(str,20,stdin);
    puts(str);
    printf("%d",work(str));
}