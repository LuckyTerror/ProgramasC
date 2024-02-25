#include <stdio.h>

int main() {
    // Declaración e inicialización de un arreglo de caracteres
    char nombre[] = "Juan";

    // Imprimir el arreglo de caracteres
    printf("El nombre es: %s\n", nombre);

    // Acceder e imprimir caracteres individuales
    printf("El primer caracter es: %c\n", nombre[0]);
    printf("El segundo caracter es: %c\n", nombre[1]);
    printf("El tercer caracter es: %c\n", nombre[2]);
    printf("El cuarto caracter es: %c\n", nombre[3]);

    // Modificar un caracter en el arreglo
    nombre[0] = 'P';
    printf("Después de modificar, el nombre es: %s\n", nombre);

    return 0;
}

