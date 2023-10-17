#include<stdio.h>
int main() {
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);
    switch(a>0)
    {
        case 1:
        printf("A is positive\n");
        break;
        case 0:
        switch(a<0)
        {
            case 1:
            printf("A is negative\n");
            break;
            case 0:
            printf("Number is zero\n");
            break;
        }
    }
    return 0;
}