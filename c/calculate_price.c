#include<stdio.h>

void calprice(float a);

int main() {
    float a=100;
    calprice(a);
    return 0;
}

void calprice(float a) {
    a = a + (0.18 * a);
    printf("%f",a);
}