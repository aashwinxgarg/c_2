#include<stdio.h>
void hoc(int a);

int main() {
    hoc(65);
}

void hoc(int a) {
    if(a>=37){
        printf("hot");
    }
    else if(a<37){
        printf("cold");
    }
}