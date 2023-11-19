#include <stdio.h>
#include <stdlib.h>

int main () {

    int *p = ( int* ) malloc(sizeof(int));
    *p = 0;
    int *q = ( int* ) malloc(sizeof(int));

    *q = 10;

    free(p);

    return 0;
}