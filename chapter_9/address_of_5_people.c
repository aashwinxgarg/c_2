#include<stdio.h>
#include<string.h>
#include<math.h>

struct address {
    int houseno;
    int block;
    char city[20];
    char state[20];
};
/*
this was using normal adresss different variables
int main()
{
    struct address p1;
    p1.houseno=101;
    p1.block=21;
    strcpy(p1.city,"chandigarh");
    strcpy(p1.state,"chandigarh");

    printf("address of p1 is: %d %d %s %s\n",p1.houseno,p1.block,p1.city,p1.state);


    struct address p2;
    p2.houseno=102;
    p2.block=22;
    strcpy(p2.city,"patiala");
    strcpy(p2.state,"punjab");

    printf("address of p2 is: %d %d %s %s\n",p2.houseno,p2.block,p2.city,p2.state);


    struct address p3;
    p3.houseno=103;
    p3.block=23;
    strcpy(p3.city,"kaithal");
    strcpy(p3.state,"haryana");

    printf("address of p3 is: %d %d %s %s\n",p3.houseno,p3.block,p3.city,p3.state);


    struct address p4;
    p4.houseno=104;
    p4.block=24;
    strcpy(p4.city,"dehradun");
    strcpy(p4.state,"uttarakhad");

    printf("address of p4 is: %d %d %s %s\n",p4.houseno,p4.block,p4.city,p4.state);


    struct address p5;
    p5.houseno=105;
    p5.block=253;
    strcpy(p5.city,"mirzapur");
    strcpy(p5.state,"uttar pradesh");

    printf("address of p5 is: %d %d %s %s\n",p5.houseno,p5.block,p5.city,p5.state);


    return 0;
}
*/
// this is using array of struct
int main(){
    struct address adds[5];


    adds[0].houseno=101;
    adds[0].block=21;
    strcpy(adds[0].city,"chandigarh");
    strcpy(adds[0].state,"chandigarh");

    printf("address of p1 is: %d %d %s %s\n",adds[0].houseno,adds[0].block,adds[0].city,adds[0].state);

    adds[1].houseno=102;
    adds[1].block=22;
    strcpy(adds[1].city,"patiala");
    strcpy(adds[1].state,"punjab");

    printf("address of p2 is: %d %d %s %s\n",adds[1].houseno,adds[1].block,adds[1].city,adds[1].state);

    adds[2].houseno=103;
    adds[2].block=23;
    strcpy(adds[2].city,"kaithal");
    strcpy(adds[2].state,"haryana");

    printf("address of p3 is: %d %d %s %s\n",adds[2].houseno,adds[2].block,adds[2].city,adds[2].state);

    adds[3].houseno=104;
    adds[3].block=24;
    strcpy(adds[3].city,"dehradun");
    strcpy(adds[3].state,"uttarakhand");

    printf("address of p4 is: %d %d %s %s\n",adds[3].houseno,adds[3].block,adds[3].city,adds[3].state);

    adds[4].houseno=105;
    adds[4].block=25;
    strcpy(adds[4].city,"mirzapur");
    strcpy(adds[4].state,"uttar pradesh");

    printf("address of p5 is: %d %d %s %s\n",adds[4].houseno,adds[4].block,adds[4].city,adds[4].state);

    
    return 0;
}