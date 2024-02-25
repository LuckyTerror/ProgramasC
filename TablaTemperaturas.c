#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int lower, upper, step;

    lower = 0;      // Límite inferior de la tabla de temperaturas
    upper = 100;    // Límite superior
    step = 10;      // Tamaño del incremento

    printf("Celsius\tFahrenheit\n");
    printf("--------------------\n");
    
    celsius = lower;
    while (celsius <= upper) {
        fahrenheit = (celsius * 9 / 5) + 32; // Fórmula de conversión de Celsius a Fahrenheit
        printf("%.2f\t%.2f\n", celsius, fahrenheit);
        celsius += step;
    }

    return 0;
}