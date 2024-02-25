#include <stdio.h>

#define LOWER 0    // Límite inferior de la tabla de temperaturas
#define UPPER 100  // Límite superior
#define STEP 10    // Tamaño del incremento

int main() {
    float celsius, fahrenheit;

    printf("Celsius\tFahrenheit\n");
    printf("--------------------\n");
    
    for(celsius = LOWER; celsius <= UPPER; celsius += STEP) {
        fahrenheit = (celsius * 9 / 5) + 32; // Fórmula de conversión de Celsius a Fahrenheit
        printf("%.2f\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
