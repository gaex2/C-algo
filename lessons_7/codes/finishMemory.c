#include <stdio.h>
#include <stdlib.h>

int main(void) {

    long int s = 0;
    long* p;

    while (1) {
        p = (long *) malloc((1000000)); // 1MiB
        *p = 10l;
        s++;

        printf("Allocati %d MiB\n", s);
    }

    /*
        Da notare che ad ogni esecuzione del ciclo il puntatore p contiene l'indirizzo del nuovo
        milione di byte allocato, perdendo l'indirizzo di quello precedente.
        In questo modo la memoria è occupata ma non utilizzabile, e in poco tempo la memoria disponibile
        del programma viene saturata.
        Se ci fosse il meccanismo di garbage collector andrebbe a controllare se i blocchi di memoria
        richiesti sono sempre utilizzati ( se ci sta almeno un riferimento nel programma a quella zona
        di memoria.), e andrebbe a rilasciare quelli non più accessibili perchè non referenziati.
    */
}