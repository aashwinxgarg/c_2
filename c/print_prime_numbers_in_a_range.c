#include<stdio.h>
int main() {
    int a = 20;
    for(int i=2;i<a;i++){
        int prime =1;
        for(int j = 2;j<i;j++){
            if(i%j==0){
                prime = 0;
                break;
            }
        }
        if (prime == 1){
                printf("%d\n",i);
        }
    }
}