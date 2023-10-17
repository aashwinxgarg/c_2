#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int temp = n,i,q=n;
    for(i = 0;temp>0;i++){
        temp=temp/10;
    }
    //printf("%d",i);
    int digit,new=0;
    for(int j=0;j<=i;j++){
        digit=n%10;
        n=n/10;
        new+=pow(digit,i);
    }
    //printf("%d",new);
    //printf("%d\n",new==q);
    if(new==q){
        printf("armstrong number ");
    }else{
        printf("not an armstrong number");
    }
}