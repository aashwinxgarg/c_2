#include<stdio.h>
#include<string.h>
#include<math.h>

struct student 
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    s1.roll=1176;
    s1.cgpa=8.5;
    //s1.name="adarsh"; this will not work because this is a string and not a pointer.
    strcpy(s1.name,"adarsh gaur");
    return 0;
}