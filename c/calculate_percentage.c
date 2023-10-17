#include<stdio.h>

int calc(int sc, int math, int sans);

int main() {
    int sc = 74;
    int math = 90;
    int sans = 82;

    printf("%d\n",calc(sc,math,sans));

    return 0;
}

int calc(int sc, int math, int sans) {
    return (sc+math+sans)/3;
}