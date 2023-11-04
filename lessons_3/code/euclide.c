
#include <stdio.h>
int main () {
    int x = 210;
    int y = 63;
    while (x != y) {
        if (x > y)
            x = x-y;
        else   
            y = y-x;
    }
    printf("mcd = %d\n", x);
    return 0;
}