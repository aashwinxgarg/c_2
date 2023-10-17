// WAP for height < 150 cm --> Dwarf
// htight = 150 cm --> Average
// height > 150 cm && <=160 cm --> Good
// height > 160 cm --> Excellent
#include <stdio.h>
int main() {
    int h;
    printf("Enter Height in cm : ");
    scanf("%d",&h);
    printf("The enetered height is : %d cm\n",h);
    if (h<150) {
        printf("Dwarf\n");
    }
    else if (h == 150) {
        printf("Average\n");
    }
    else if (h>150 && h<=160) {
        printf("Good\n");
    }
    else {
        printf("Excellent\n");
    }
    return 0;
}