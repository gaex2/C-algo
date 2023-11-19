#include <stdlib.h>
#include <stdio.h>

int main () {
    
    int* q = (int*) malloc(sizeof(int));
    int* p = q;

    *q = 10;
    printf("contenuto della memoria puntata da q: %d\n", (*q));
    printf("contenuto della memoria puntata da p: %d\n", (*p));

    free(p);

    // i puntatori alla memoria sono ancora disponibili,
    // ma la memoria sarà riutilizzata dal programma
    printf("%d\n", (*p));
    printf("%d\n", (*q));
}