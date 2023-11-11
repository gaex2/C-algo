#include <stdio.h>

int main() {

    float x = 7.0f;
    float y = 2.8f;

    int a = x / y; // Divisione reale, resultato = 2.5

    // prima calcola il valore della divisione reale e poi tronca la parte decimale
    printf("risultato operazione di divisione senza cast: %d\n", a); 
    puts("------------------------------");

    int x_as_integer = x;
    int y_as_integer = y;

    printf(" x messo in una variabile intera: %d\n", x_as_integer);
    printf(" y messo in una variabile intera: %d\n", y_as_integer);

    int x_casted = (int) x;
    int y_casted = (int) y;

    printf(" x castato a intero: %d\n", x_casted);
    printf(" y castato a intero: %d\n", y_casted);
    puts("--------------------------------");

    // avendo castato la parte intera del valore della divisione è diverso dal precedente
    printf("risultato operazione di divisione con cast prima: %d", x_casted / y_casted); 


}