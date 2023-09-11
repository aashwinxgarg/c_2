#include<stdio.h>
int main() {
    float rad;
    printf("Enter the radius: ");
    scanf("%f",&rad);

    float area= 3.14*rad*rad;
    
    printf("area is: %f",area);
}