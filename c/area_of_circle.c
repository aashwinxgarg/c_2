#include <stdio.h>
int main() {
    float radius;

    printf("Enter the radius : ");
    scanf("%f",&radius);

    printf("The area of circle is %.2f\n", 3.14 * radius * radius);
    return 0;
}