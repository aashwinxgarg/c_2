#include<stdio.h>
#include<math.h>

void square(int side);
void circle(int radius);
void rectangle(int length,int breadth);

int main() {
    int side=4,radius=7,length=4,breadth=5;
    circle(radius);
    square(side);
    rectangle(length,breadth);
}

void square(side) {
    int areas = side*side;
    printf("square %d\n",areas);
}

void rectangle(length,breadth) {
    int arear=length*breadth;
    printf("rectangle %d\n",arear);
}

void circle(radius) {
    int areac = 3.14*radius*radius;
    printf("circle %d\n",areac);
}