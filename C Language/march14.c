// WAP to find largest number from 2 numbers from two numbers using return with argument function pointer.
#include<stdio.h>
int display(a,b) {
    int max;
    max = (a>b)? a:b;
    return max;
}
int main() {
    void (*fptr)(int,int)=&display;
    int n1,n2;
    scanf("%d\n",&n1);
    scanf("%d\n",&n2);
    printf("%d",(*fptr)(n1,n2));
    return 0;
} 