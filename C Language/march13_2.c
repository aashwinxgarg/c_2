// Write a code to demonstrate a function pointer to call a no return no argument function
#include<stdio.h>
void display() {
    printf("Hello World\n");
}
int main() {
    void (*fptr)()=&display;
    (*fptr)();
    return 0;
}