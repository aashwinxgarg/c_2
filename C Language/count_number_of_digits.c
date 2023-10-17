#include<stdio.h>
#include<math.h>
int main() {
    int number,count=0;
    printf("Enter the number : ");
    scanf("%d",&number);
    while (number>0) {
        number=number/10;
        count=count+1;
    }
    printf("%d\n",count);
    return 0;
}