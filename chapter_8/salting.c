#include<stdio.h>
#include<string.h>
int main() {
    char pass[100];
    scanf("%s",pass);
    char newpass[200];
    strcpy(newpass,pass);
    char salt[]="123";
    strcat(newpass,salt);
    printf("%s",newpass);
}