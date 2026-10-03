#include <stdio.h>

//imprimir numero del 1 al 5 usando variable de control: ciclo while

int main() {
    int i = 1; // Valor inicial
    
    while (i <= 5) {
        printf("Numero: %d\n", i);
        i++; // Incremento para evitar un ciclo infinito
    }
    
    return 0;
}