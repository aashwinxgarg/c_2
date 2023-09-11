#include<stdio.h>

float farhan(float celsius);

int main() {
    printf("%.2f",farhan(0));
    return 0;
}

float farhan(float celsius){
    float farhen=(celsius*9/5)+32;
    return farhen;
}