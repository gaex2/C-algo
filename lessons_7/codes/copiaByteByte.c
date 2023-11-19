#include <stdio.h>

int main () {

    int i = 10;
    int j = 20;
    char *p, *q;

    p = (char*) &i;
    q = (char*) &j;

    for ( size_t k = 0; k < sizeof(i); ++k ) {
        *(q + k) = *(p + k);
    }

    printf("%d == %d\n", i, j);

    return 0;
}