#include <stdio.h>
#include <string.h>
int main() {
    char pass1, pass2;
    printf("Enter Password : ");
    scanf("%s",&pass1);
    printf("\nRe-enter Password : ");
    scanf("%s",&pass2);
    printf("%d",strcmp(pass1,pass2));
    return 0;
}