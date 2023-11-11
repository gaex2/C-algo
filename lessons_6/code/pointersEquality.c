#include <stdio.h>

int main () {

    int p=1, q=1, r=3;
    int *p1 = &p, *p2 = &p; *p3 = q; *p4 = &r;

    if (p1 == p2)   // true, p1 e p2 puntano alla stessa variabile

    if (*p1 == *p2)  //true, le variabili puntate sono la stessa

    if (p2 == p3)    //false, p2 e p3 puntano a variabili diverse

    if (*p2 == *p3) // true, le variabili puntate da entrambi hanno lo stesso valore

    if (p3 == p4)   // false, p3 e p4 puntano a variabili diverse

    if (*p3 == *p4) // false, le variabili puntate da entrambi hanno valori diversi


}