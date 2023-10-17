#include<stdio.h>

int max(int*a,int*b,int*max);

int main() {
    int a = 50,b=700,maxi=0;
    max(&a,&b,&maxi);
    printf("%d",maxi);
}

int max(int*a,int*b,int*maxi){
    if(*a>*b){
        *maxi = *a;
    }else{
        *maxi= *b;
    }
}