#include<stdio.h>
int main() {
    float side;
    printf("Enter length of side: ");
    scanf("%f",&side);

    float area = side*side;

    printf("area of square is: %f\n",area);
}