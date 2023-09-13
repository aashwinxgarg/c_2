#include<stdio.h>
#include<string.h>
#include<math.h>

struct student {
    char name[20];
    int marks;
    float cgpa;
    char course[20];
};

int main()
{
    FILE *fptr;
    fptr=fopen("table.txt","w");
    struct student s1={"aashwin",100,9.9,"computer science"};
    struct student s2={"aastik",98,9.8,"mechnical"};
    struct student s3={"abhay",96,9.6,"business"};
    struct student s4={"sachdeva",94,9.4,"electrical"};
    struct student s5={"aastik",92,9.2,"management"};

    fprintf(fptr,"%s\t",s1.name);
    fprintf(fptr,"%d\t",s1.marks);
    fprintf(fptr,"%.2f\t",s1.cgpa);
    fprintf(fptr,"%s\n",s1.course);
    
    fprintf(fptr,"%s\t",s2.name);
    fprintf(fptr,"%d\t",s2.marks);
    fprintf(fptr,"%.2f\t",s2.cgpa);
    fprintf(fptr,"%s\n",s2.course);

    fprintf(fptr,"%s\t",s3.name);
    fprintf(fptr,"%d\t",s3.marks);
    fprintf(fptr,"%.2f\t",s3.cgpa);
    fprintf(fptr,"%s\n",s3.course);

    fprintf(fptr,"%s\t",s4.name);
    fprintf(fptr,"%d\t",s4.marks);
    fprintf(fptr,"%.2f\t",s4.cgpa);
    fprintf(fptr,"%s\n",s4.course);

    fprintf(fptr,"%s\t",s5.name);
    fprintf(fptr,"%d\t",s5.marks);
    fprintf(fptr,"%.2f\t",s5.cgpa);
    fprintf(fptr,"%s\n",s5.course);
    fclose(fptr);
    return 0;
}