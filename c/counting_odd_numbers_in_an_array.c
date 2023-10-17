#include<stdio.h>


int main(){
    int arr[3][3];
    arr[0][0]=61;
    arr[0][1]=63;
    arr[0][2]=65;

    arr[1][0]=71;
    arr[1][1]=73;
    arr[1][2]=83;

    arr[2][0]=81;
    arr[2][1]=87;
    arr[2][2]=83;

    int count=0;
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]%2!=0){
               // printf("%d\n",arr[i][j]);
                count+=1;
            }
        }
    }
    printf("%d\n",count);
}