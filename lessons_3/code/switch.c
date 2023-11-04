#include <stdio.h>

int main(){

    // trying switch sintax

    int sides;

    printf("enter number of sides: ");
    scanf("%d", &sides);

    switch (sides) {
        case 6: printf("Exagon");
            break;
        case 5: printf("Pentagon");
            break;
        case 4: printf("square");
            break;
        case 3: printf("triangle");
            break;
        default: 
            printf("\n");
            printf("Value must be >= 3");
    }

    return 0;
}