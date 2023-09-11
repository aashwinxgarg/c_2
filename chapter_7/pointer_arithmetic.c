#include<stdio.h>
int main() {
    int age[] ={22,23};
    int *ptr=&age[0];
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
    ptr++;
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
}