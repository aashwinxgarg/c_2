#include<stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    // for loop
    for (int i = 0;i<=n;i++){
        printf("%d\n",i);
    }
    printf("\n");
    //while loop
    int i =0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }

    return 0;
}