#include <stdio.h>
int main() {
    int a=500;
    int *p = &a;
    printf("%d\n",p);
    
    a = 200;
    int *k = &a;
    printf("%d\n",k);
    return 0;
}