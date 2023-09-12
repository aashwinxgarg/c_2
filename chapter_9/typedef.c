#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct ComputerEngineeringStudents{
    int roll;
    char name[100];
    float cgpa;
} coe;

int main()
{
    coe cse[100];

    cse[0].roll=101;
    strcpy(cse[0].name,"him");
    cse[0].cgpa=10.0;

    printf("roll is %d,\tname  is %s,\tcgpa is %.2f\n",cse[0].roll,cse[0].name,cse[0].cgpa);
    
    coe s1;
    s1.roll=121;
    printf("%d",s1.roll);
    
    return 0;
}