#include <stdio.h>

// Función que toma dos enteros como argumentos y los suma
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 3;
    
    // Llamamos a la función sumar y pasamos num1 y num2 como argumentos
    int resultado = sumar(num1, num2);
    
    // Imprimimos el resultado
    printf("La suma de %d y %d es: %d\n", num1, num2, resultado);
    
    return 0;
}
