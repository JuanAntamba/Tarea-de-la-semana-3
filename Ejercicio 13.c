#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);
    if (numero < 1) {
        printf("El numero ingresado debe ser mayor o igual a 1.\n");
    } else {
        printf("Multiplos de 5 comprendidos entre 1 y %d:\n", numero);

    }
}