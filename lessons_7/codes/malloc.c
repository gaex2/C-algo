#include <stdio.h>
#include <stdlib.h>

int main () {

    // allocazione di 1 byte

    // in generale è buona norma indicare il numero di elementi usando
    // l'operatore sizeof e una moltiplicazione: 10 * sizeof(int) -> alloca 40 byte
    char* p = (char*) malloc(sizeof(char));
}