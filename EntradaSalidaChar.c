#include <stdio.h>

int main() {
    char caracter;

    printf("Introduce un caracter: ");
    caracter = getchar(); // Lee un caracter desde la entrada estándar

    printf("El caracter introducido es: ");
    putchar(caracter); // Imprime el caracter en la consola
    putchar('\n'); // Imprime un salto de línea

    return 0;
}

