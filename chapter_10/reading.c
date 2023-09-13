#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    FILE *fptr;
    fptr=fopen("Test.txt","w");

    








    //FPUTC
    // fputc('A',fptr);
    // fputc('P',fptr);
    // fputc('P',fptr);
    // fputc('L',fptr);
    // fputc('E',fptr);





    //FGETC
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));






    //IN APPEND MODE
    // fprintf(fptr,"%c",'M');
    // fprintf(fptr,"%c",'a');
    // fprintf(fptr,"%c",'n');
    // fprintf(fptr,"%c",'g');
    // fprintf(fptr,"%c",'o');



    //IN WRITE MODE
    // fprintf(fptr,"%c",'M');
    // fprintf(fptr,"%c",'a');
    // fprintf(fptr,"%c",'n');
    // fprintf(fptr,"%c",'g');
    // fprintf(fptr,"%c",'o');
    
    // IN READ MODE
    // char ch;
    
    // fscanf(fptr,"%c",&ch);
    // printf("%c\t",ch);

    // fscanf(fptr,"%c",&ch);
    // printf("%c\t",ch);

    // fscanf(fptr,"%c",&ch);
    // printf("%c\t",ch);
    
    // fscanf(fptr,"%c",&ch);
    // printf("%c\t",ch);
    
    // fscanf(fptr,"%c",&ch);
    // printf("%c\t",ch);

    fclose(fptr);
    
    return 0;
}