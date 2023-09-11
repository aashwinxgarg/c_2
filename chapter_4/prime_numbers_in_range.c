#include<stdio.h>
int main() {
    int n=20; 
    for(int i=2;i<n;i++){
        int prime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                prime=0;
            }
        }
        if(prime==1){
            printf("%d\n",i);
        }
    }
}