#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z') {
        printf("upper letters");
    }
    else if (ch>='a' && ch<='z') {
        printf("lower letters");
    }
    else {
        printf("not an english letter !\n");
    }
    return 0;
}