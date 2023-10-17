#include<stdio.h>

int powe(int a,int b);

int main(){
    int n = 2;
    int n2=10;
    printf("%d",powe(n,n2));
    return 0;
}

int powe(int a,int b){
    int ans=1;
    for(int i = 1;i<=b;i++){
        ans*=a;
    }
    return ans;
}