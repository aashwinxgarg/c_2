#include<stdio.h>
int main() {
    int num1,num2,num3;
    printf("Enter number 1, number 2 and number 3;");
    scanf("%d %d %d",&num1,&num2,&num3);

    float average = (num1+num2+num3)/3.0;
    
    printf("Average is %f",average);
}