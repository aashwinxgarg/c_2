#include<stdio.h>
#include "external.h"
int main() {
    extern int principal;
    extern float rate;
    extern int time;
    extern float interest;
    interest = principal * rate * time / 100;
    printf("Interest = %.2f",interest);
    return 0;
}