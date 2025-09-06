#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Solicitar datos al usuario
    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &peso);
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    // Calcular IMC
    imc = peso / (altura * altura);

    // Mostrar resultado
    printf("\nSu IMC es: %.2f\n", imc);

    // Mostrar tabla de referencia
    printf("\nClasificación del IMC:\n");
    printf("Menor de 18.5      : Bajo peso\n");
    printf("Entre 18.5 y 24.9  : Peso normal\n");
    printf("Entre 25.0 y 29.9  : Sobrepeso\n");
    printf("Entre 30.0 y 34.9  : Obesidad grado I\n");
    printf("Entre 35.0 y 39.9  : Obesidad grado II\n");
    printf("40.0 o más         : Obesidad grado III\n");

    return 0;
}
