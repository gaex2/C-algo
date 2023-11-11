#include <stdio.h>

int main () {

    int intero = 100000;

    char* p1 = (char*) &intero;

    printf("numero dentro il primo byte: %c\n", *p1);
    printf("numero dentro il secondo byte: %c\n", *(p1 + 1));
    printf("numero dentro il terzo byte: %c\n", *(p1 + 2));
    printf("numero dentro il quarto byte: %c\n", *(p1 + 3));
    
}