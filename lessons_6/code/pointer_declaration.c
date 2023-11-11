#include <stdio.h>

int main() {
    // modo di allocare variabili sistematico didattico

    // allora memoria per un intero
    int intero;        

    // alloca memoria per la variabile puntatore     
    int *p_intero;       

     // assegna a p_intero l'indirizzo della locaizone associata ad intero   
    p_intero = &intero;    

     // metti nella locazione di memoria puntata da p il valore 10;
    *p_intero = 10;               

    printf("i = %d\n", intero);
}