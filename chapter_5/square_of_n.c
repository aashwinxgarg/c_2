#include<stdio.h>
#include<math.h>

void square(int n);

int main(){
    int a;
    printf("enter a: ");
    scanf("%d",&a);
    square(a);
    return 0;
}

void square(int n) {
    printf("%f",pow(n,2));
}