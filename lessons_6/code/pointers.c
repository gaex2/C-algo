#include <stdio.h>

int main() {

    int i = 1;
    printf("L'indirizzo di i e' %p\n", &i);
    printf("Il valore di i e' %d\n", i);

    // operatore per accedere alla locazione puntata da quell'indirizzo

    int j = 1;
    // &(argomento) restituisce l'indirizzo della locazione puntata dal suo argomento,
    // *(argomento) restituisce il valore contenuto nella locazione di memoria puntata dal suo argomento
    int f = *&j;

    printf("Valore di j: %d\n", j);
    printf("Valore di f: %d\n", f);
    printf("Valore dell'indirizzo di j: %p", &j);

    // sintassi dichiarazione variabile tipo puntatore

    // variabile di tipo puntatore ad un intero, fa molta differenza la tipologia di variabile a cui si punta
    // finchè non viene assegnato un valore alla variabile, analogamente alle altre, non è definito il valore all'interno
    int *p1;

}