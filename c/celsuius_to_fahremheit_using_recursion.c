#include<stdio.h>

float calc(float c);

int main() {
    printf("%.2f\n",calc(37));
    return 0;
}

float calc(float c) {
    float value = (c*(9.0/5.0))+32;
    return value;
}