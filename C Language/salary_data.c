#include <stdio.h>
int main()
{
    // program 1
    int basicsalary;
    float hra, da;
    printf("Enter your basic salary : Rs. ");
    scanf("%d",&basicsalary);
    if (basicsalary <= 10000) {
        hra = 0.2 * basicsalary;
        da = 0.8 * basicsalary;
    }
    else if (basicsalary > 10000 && basicsalary < 20000) {
        hra = 0.25 * basicsalary;
        da = 0.9 * basicsalary;
    }
    else {
        hra = 0.3 * basicsalary;
        da = 0.95 * basicsalary;
    }
    printf("HRA is Rs. %0.0f\n",hra);
    printf("DA is Rs. %0.0f\n",da);
    return 0;

    //program 2

}