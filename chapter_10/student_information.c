#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    FILE *fptr;
    fptr=fopen("Test.txt","w");

    char name[100];
    int age;
    float cgpa;

    scanf("%s",name);
    fprintf(fptr,"name is: %s\n",name);
    // fprintf("\n");

    scanf("%d",&age);
    fprintf(fptr,"age is: %d\n",age);

    scanf("%f",&cgpa);
    fprintf(fptr,"cgpa is: %.2f",cgpa);


    fclose(fptr);
    //return 0;
}