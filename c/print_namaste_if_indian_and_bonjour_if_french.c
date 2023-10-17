#include<stdio.h>

void namaste();
void bonjour();

int main() {
    char ch;
    printf("enter i for indian and f for french : ");
    scanf("%c",&ch);
    if(ch=='i') {
        namaste();
    }else if (ch=='f') {
        bonjour();
    }
    return 0;
}

void namaste() {
    printf("namaste!\n");
}

void bonjour() {
    printf("bonjour\n");
}