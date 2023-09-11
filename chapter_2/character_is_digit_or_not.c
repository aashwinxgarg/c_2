#include<stdio.h>
int main() {
    char given;
    printf("Type the whatever: ");
    scanf("%c",&given);

    printf("%d",given>='0' && given<='9');
}