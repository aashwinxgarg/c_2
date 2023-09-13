#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    float *ptr;
    ptr=(float *)malloc(5 * sizeof(float));
    ptr[0]=10.0;
    ptr[1]=9.0;
    ptr[2]=8.0;
    ptr[3]=7.0;
    ptr[4]=6.0;

    for(int i=0;i<5;i++){
        printf("%.2f\n",ptr[i]);
    }
    free(ptr);
    return 0;
}