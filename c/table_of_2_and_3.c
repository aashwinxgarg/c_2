#include<stdio.h>

int store(int tab[][10],int n, int m, int number);

int main() {
    int arr[2][10];
    store(arr,0,10,2);
    store(arr,1,10,3);
}

int store(int tab[][10],int n, int m, int number){
    for(int i=0;i<m;i++){
        tab[n][i]=number*(i+1);
        printf("%d\t",tab[n][i]);
    }
    printf("\n");
}