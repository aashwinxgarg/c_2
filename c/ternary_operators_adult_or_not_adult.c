#include<stdio.h>
int main() {
    int age;
    printf("Enter age : ");
    scanf("%d",&age);
    age>=18 ? printf("Adult\n") : printf("Not Adult\n");
}
// can be used only when we have a single command to execute
