#include <stdio.h>

int main () {

    int x;

    // viene valutata l'espressione e in più viene eseguita l'operazione in memoria corrispondente
    printf("Sto assegnando per la prima volta 7 ad x, l'assegnazione sta restituendo = %d\n", x = 7);
    printf("Sto leggendo il contenuto della variabile x = %d\n\n", x);

    char a;

    printf("Sto assegnando il carattere 'A' alla variabile a e leggendo il valore dell'assegnazione come intero = %d\n", a = 'A');
    printf("Sto assegnando il carattere 'B' alla variabile a e leggendo il valore dell'assegnazione come char = %c\n", a = 'B');
    
    
    return 0;
}