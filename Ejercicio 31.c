#include <stdio.h>

int main() {
    int numero, suma = 0, contador = 0;

    printf("Ingrese numeros de su eleccion, recordando que para el promedio general se tomara en cuenta numeros terminados en 5. Ingrese 0 para terminar.\n");

    do {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; 
        }

        if (numero % 10 == 5) {
            suma = suma + numero;
            contador=contador+1;
        }
    } while (numero != 0);

    if (contador > 0) {
        float promedio = (float)suma / contador;
        printf("El promedio de los numeros terminados en 5 es: %.2f\n", promedio);
    }
}
