#include<stdio.h>

int main(){
    int a = 135,count=0;
    int temp=a;
    while(temp>0){
        temp=temp/10;
        count+=1;
    }
    int arr[count];
    int i =0;
    while(a>0){
        arr[i]=a%10;
        a=a/10;
        i++;
    }
    int j =1,final=0;
    for(int i=count-1;i>=0;i--){
        if(j%2!=0){
            final+=arr[i];
        }else{
            final-=arr[i];
        }
        j++;
    }
    printf("%d",final);
}