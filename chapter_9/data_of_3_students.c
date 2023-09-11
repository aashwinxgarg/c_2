#include<stdio.h>
#include<string.h>
#include<math.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    s1.roll=1176;
    strcpy(s1.name,"adarsh gaur");
    s1.cgpa=8.0;

    struct student s2;
    s2.roll=1125;
    strcpy(s2.name,"aashwin garg");
    s2.cgpa=9.0;

    struct student s3;
    s3.roll=1132;
    strcpy(s3.name,"aastik vats");
    s3.cgpa=8.5;

    printf("s1 name is %s\n",s1.name);
    printf("s1 roll is %d\n",s1.roll);
    printf("s1 cgpa is %.2f\n",s1.cgpa);
    printf("\n");

    printf("s2 name is %s\n",s2.name);
    printf("s2 roll is %d\n",s2.roll);
    printf("s2 cgpa is %.2f\n",s2.cgpa);
    printf("\n");
    
    printf("s3 name is %s\n",s3.name);
    printf("s3 roll is %d\n",s3.roll);
    printf("s3 cgpa is %.2f\n",s3.cgpa);
    return 0;
}