// Write a code to demonstrate a function pointer to call a no return 2 argument function
#include<stdio.h>
void display(a,b) {
    printf("a + b = %d\n",a+b);
}
int main() {
    void (*fptr)()=&display;
    int n1,n2;
    printf("Enter your first number : ");
    scanf("%d",&n1);
    printf("Enter your second number : ");
    scanf("%d",&n2);
    (*fptr)(n1,n2);
    return 0;
}