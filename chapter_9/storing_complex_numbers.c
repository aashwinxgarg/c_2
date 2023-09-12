#include<stdio.h>
#include<string.h>
#include<math.h>

struct complex{
    int real;
    int imag;
};
int main()
{
    struct complex n1={5,8};
    struct complex *ptr=&n1;
    printf("%d\t",ptr->real);
    printf("%d\t",ptr->imag);

    return 0;
}