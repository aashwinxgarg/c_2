#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct BankInformation {
    int accno;
    char name[25];
} ba;

int main()
{
    ba acc1= {101,"adarsh"};
    ba acc2= {102,"aastik"};
    ba acc3= {103,"yash"};


    return 0;
}