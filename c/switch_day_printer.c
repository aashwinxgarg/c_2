#include<stdio.h>
int main() {
    int day;
    printf("Enter the day (1-7) : ");
    // 1 - monday, 2- tuesday, 3- wednesday, 4- thursday, 5- friday, 6- saturday, 7- sunday
    scanf("%d",&day);
    switch(day) {
        case 1 : printf("Monday");
                 break;
        case 2 : printf("Tuesday");
                 break;
        case 3 : printf("Wednesday");
                 break;
        case 4 : printf("Thursday");
                 break;
        case 5 : printf("Friday");
                 break;
        case 6 : printf("Saturday");
                 break;
        case 7 : printf("Sunday");
                 break;
        default : printf("not a valid day enetered !");
    }
}