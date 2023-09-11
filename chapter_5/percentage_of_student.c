#include<stdio.h>

float per(int sci, int math, int sans);

int main(){
    printf("%.2f\n",per(74,90,80));
    return 0;
}

float per(int sci, int math, int sans){
    float percentage=((sci+math+sans)/300.0)*100;
    return percentage;
}
