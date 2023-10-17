#include<stdio.h>
#include<math.h>
int main() {
    int num,r;
    printf("Enter any number : ");
    scanf("%d",&num);
    int num1=num;
    int ndigits,new_num=0;
    for(ndigits=0;num1!=0;num1=num1/10){
        r=num%10;
        new_num+=pow(r,ndigits);
    }
    if(new_num==num){
        printf("armstrong number");
    }else{
        printf("not an armstrong number");
    }
    return 0;
}