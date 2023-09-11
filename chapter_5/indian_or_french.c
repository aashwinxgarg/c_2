#include<stdio.h>

void func();

int main() {
    func();
    return 0;
}

void func() {
    char nation;
    printf("Enter 'i' if indian and 'f' if french: ");
    scanf("%c",&nation);
    if(nation=='i'){
        printf("Namaste! ");
    }
    else if(nation=='f'){
        printf("Bonjour! ");
    }
    else{
        printf("wrong entry! ");
    }
}