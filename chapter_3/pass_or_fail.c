#include<stdio.h>
int main() {
    int n;
    printf("Enter the marks of a student: ");
    scanf("%d",&n);

    if(n>30){
        printf("PASS");
    }
    else{
        printf("FAIL");
    }
}