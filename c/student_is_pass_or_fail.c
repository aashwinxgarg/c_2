#include<stdio.h>
int main() {
    int marks;
    printf("Enter your marks (1-100) : ");
    scanf("%d",&marks);

    
    // if (marks > 30 && marks <=100) {
    //     printf("you are passed");
    // }
    // else if ( marks <= 30 && marks >= 0){
    //     printf("you are failed");
    // }
    // else {
    //     printf("invalid marks");
    // }


    marks>30?printf("passed"):printf("failed"); 


    return 0;
}