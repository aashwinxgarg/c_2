#include<stdio.h>
int main() {
    int units;
    float bill;
    scanf("%d",&units);
    if(units<200){
        bill = units*1.20;
    }
    else if(units>=200 && units<400) {
        bill = units*1.50;
    }
    else if(units>=400 && units<600) {
        bill = units*1.80;
    } 
    else if(units>=600){
        bill=units*2.00;
    }
    if(bill<100){
        bill = 100;
    }
    if (bill>400) {
        bill=bill+(0.15*bill);
    }
    printf("%.2f",bill);
}