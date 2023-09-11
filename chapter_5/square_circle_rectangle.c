#include<math.h>
#include<stdio.h>

int square(int side);
int circle(int rad);
int rectangle(int len, int bre);

int main() {
    int side=4;
    int rad=7;
    int len=5,bre=4;
    square(side);
    circle(rad);
    rectangle(len,bre);
    return 0;
}

int square(int side) {
    printf("area of square= %d\n",side*side);
    return side*side;
}

int circle(int rad) {
    printf("area of circle= %f\n",3.14*rad*rad);
    return 3.14*rad*rad;
}

int rectangle(int len,int bre) {
    printf("area of rectangle= %d\n",len*bre);
    return len*bre;
}