#include<stdio.h>
int main() {
    int n;
    for(int i=0;;i++){
        printf("Enter number: ");
        scanf("%d",&n);
        if(n%2!=0){
            printf("thankyou");
            break;
        }
        printf("%d\n",n);
    }
}