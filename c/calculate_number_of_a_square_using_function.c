#include<stdio.h>
#include<math.h>

void square(int a);

int main() {
    int a;
    scanf("%d",&a);
    square(a);
    return 0;
}

void square(int a) {
    int b;
    b= pow(a,2);
    printf("%d\n",b);
}