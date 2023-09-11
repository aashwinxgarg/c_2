#include<stdio.h>
int main() {
    int n;
    for(int i=0;;i++){
        printf("enter number: ");
        scanf("%d",&n);
        if(n%7==0){
            printf("thankyou!");
            break;
        }
        printf("%d\n",n);
    }
}