#include<stdio.h>
int main() {
    char day;
    printf("Enter the day(m,t,w,T,f,s,S) : ");
    // m- monday, t- tuesday, w- wednesday, T- thursday, f-friday, s- saturday, S- sunday
    scanf("%c",&day);
    switch(day) {
        case 'm' : printf("monday");
                   break;
        case 't' : printf("tuesday");
                   break;
        case 'w' : printf("wednesday");
                   break;
        case 'T' : printf("thursday");
                   break;
        case 'f' : printf("friday");
                   break;
        case 's' : printf("saturday");
                   break;
        case 'S' : printf("sunday");
                   break;
        default : printf("not a valid expression input !\n");
    }
    return 0;
}