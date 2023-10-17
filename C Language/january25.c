#include<stdio.h>
int main() {

    //program 1 to swap two number
    /*
    int n1 , n2;
    printf("enter first no : ");
    scanf("%d",&n1);
    printf("enter second no :");
    scanf("%d",&n2);
    printf("n1 before swapping : %d\n",n1);
    printf("n2 before swapping : %d\n",n2);
    printf("n1 after swapping : %d\n",n2);
    printf("n2 after swapping : %d\n",n1);
    */

    //          OR

    /*    
    int n3, n4,temp;
    printf("Enter first no : ");
    scanf("%d",&n3);
    printf("Enter second no : ");
    scanf("%d",&n4);
    temp = n3;
    n3=n4;
    n4=temp;
    printf("Before Swapping : \n n1 = %d \n n2 = %d\n",n4,n3);
    printf("After Swapping : \n n1 = %d \n n2 = %d\n",n3,n4);
    */

    //program 2 if else statement
    /*
    int x = 0;
    if (x==0)
        printf("C ");
    else
        printf("How are you");
        printf("Language");
    */
   
   // program 3 of even odd 
   /*
   {
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    if (num & 1)
    {
        printf("%d is Odd\n",num);

    }
    else 
    {
        printf("%d is Even\n",num);
    }
   }    
    */

   //program 4 leap year
   /*
    {
        int y,year;
        printf("Enter year : ");
        scanf("%d",&year);
        if ((y%400==0)||(y%4==0 && y%100!=0)){
            printf("Leap Year");
        }
        else {
            printf("Not a Leap Year");
        }
    }
    */

   //program 5 to syntax
   /*
   int roll;
   printf("Input Roll No. : ");
   scanf("%d",&roll);
   if (roll ==1114) {
    printf("Aarav Thakran");
   }
   else if (roll == 1115) {
    printf("Aarchi Goyal");
   }
   else if (roll == 1117) {
    printf("Aarush Arora");
   }
   else if (roll == 1148) {
    printf("Abhay Mankotia");
   }
   else {
    printf("Invalid Input");
   }
   */

    
    return 0;
}