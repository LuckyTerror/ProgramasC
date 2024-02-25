#include <stdio.h>

// Declaración de la variable externa
extern int variableExterna;

int main() {
    // Acceso a la variable externa definida en otro archivo
    printf("El valor de la variable externa es: %d\n", variableExterna);
    return 0;
}
