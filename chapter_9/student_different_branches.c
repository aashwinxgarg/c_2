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

    strcpy(ece[1].name,"anmol");
    ece[1].roll=1102;
    ece[1].cgpa=9.9



    strcpy(coe[0].name,"shreya");
    coe[0].roll=1201;
    coe[0].cgpa=9.8;



    strcpy(it[0].name,"aashwin");
    it[0].roll=1301;
    it[0].cgpaa=9.7;

    strcpy(it[1].name,"adarsh");
    it[1].roll=1302;
    it[1].cgpa=9.6;

    strcpy(it[2].name,"aastik");
    it[2].roll=1303;
    it[2].cgpa=9.5



    return 0;
}