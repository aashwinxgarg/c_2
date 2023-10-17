#include<stdio.h>
void printhello();
void printgoodbye();

int main() {
    printhello();
    printf("\n");
    printgoodbye();
    printf("\n");
    return 0;
}

void printhello() {
    printf("Hello!");
}

void printgoodbye() {
    printf("Goodbye");
}