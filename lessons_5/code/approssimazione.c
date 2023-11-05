#include <stdio.h>

int main () {

    float x = 1222333444.0f;
    
    printf("Little addition to a large number:\n");
    printf("x = %f\n", x);
    x += 1.0f;;
    printf("x + 1.0 = %f\n", x);
    printf("------------------\n");
    printf("Large addition to a large number:\n");
    float y = 1222333444.0f;
    printf("y = %f\n", y);
    y += 500.0f;
    printf("y + 500.0 = %f\n", y);


}