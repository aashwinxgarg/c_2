#include<stdio.h>
#include<string.h>
#include<math.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student ece[100];
    struct student coe[100];
    struct student it[100];



    strcpy(ece[0].name,"krishna");
    ece[0].roll=1101;
    ece[0].cgpa=10.0;

    printf("%s",ece[0].name);
    printf("\n%d",ece[0].roll);
    printf("\n%.2f\n",ece[0].cgpa);

    strcpy(ece[1].name,"anmol");
    ece[1].roll=1102;
    ece[1].cgpa=9.9;

    printf("\n%s",ece[1].name);
    printf("\n%d",ece[1].roll);
    printf("\n%.2f\n",ece[1].cgpa);

    //struct student ece[2]={1103,9.4,"nooneelse"};

    printf("\n%s",ece[2].name);
    printf("\n%d",ece[2].roll);
    printf("\n%.2f\n",ece[2].cgpa);



    strcpy(coe[0].name,"shreya");
    coe[0].roll=1201;
    coe[0].cgpa=9.8;

    printf("\n%s",coe[0].name);
    printf("\n%d",coe[0].roll);
    printf("\n%.2f\n",coe[0].cgpa);



    strcpy(it[0].name,"aashwin");
    it[0].roll=1301;
    it[0].cgpa=9.7;

    printf("\n%s",it[0].name);
    printf("\n%d",it[0].roll);
    printf("\n%.2f\n",it[0].cgpa);

    strcpy(it[1].name,"adarsh");
    it[1].roll=1302;
    it[1].cgpa=9.6;

    printf("\n%s",it[1].name);
    printf("\n%d",it[1].roll);
    printf("\n%.2f\n",it[1].cgpa);

    strcpy(it[2].name,"aastik");
    it[2].roll=1303;
    it[2].cgpa=9.5;

    printf("\n%s",it[2].name);
    printf("\n%d",it[2].roll);
    printf("\n%.2f\n",it[2].cgpa);



    return 0;
}