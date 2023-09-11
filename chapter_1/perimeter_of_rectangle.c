#include<stdio.h>
int main() {
    float length, breadth;
    printf("Enter length of rectangle: ");
    scanf("%f",&length);
    
    printf("Enter the breadth of rectangle: ");
    scanf("%f",&breadth);

    float perimeter= 2* (length+breadth);

    printf("perimeter of the rectangle is: %f", perimeter);
}