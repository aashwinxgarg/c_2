#include <stdio.h>
int main() {
    
    //program 1
    int c = 5;
    if (c<1) {
        printf("Hello");
    }

    //program 2
    int a=2,b=3;
    if (a>b) {
        printf("Hello");
        printf("Hi");
    }

    //program 3
    int d = 2,e=3;
    if (d>e)
    printf("Hello");
    printf("Hi\n");
    
    //program 4
    int i = 3;
    if(i)
    {
        printf("%d",i);
    }
//all non zero values are considered as true, only 0 is considered as false;

    return 0;
}