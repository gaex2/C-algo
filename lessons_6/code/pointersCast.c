#include <stdio.h>

int main () {

    int i = 1;
    int* p1 = &i;

    char* p2 = (char*) p1;

    printf("valore di p1 + 1: %p\n", p1 + 1);
    printf("valore di p2 + 1: %p", p2 + 1);

    // i valori sono diversi perchè la somma dipende dal tipo su cui è definito il puntatore

}