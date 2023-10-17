#include<stdio.h>

int main() {
    float price[3]={100.00,15.5,25.5};
    float tota = price[0]+price[1]+price[2];
    tota=tota+(0.18*tota);
    printf("%f\n",tota);
    price[0]=price[0]+(0.18*price[0]);
    price[1]=price[1]+(0.18*price[1]);
    price[2]=price[2]+(0.18*price[2]);
    printf("%f %f %f\n",price[0],price[1],price[2]);
    float total = price[0]+price[1]+price[2];
    printf("%f",total);

}