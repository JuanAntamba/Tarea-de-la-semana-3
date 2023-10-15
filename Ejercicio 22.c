#include <stdio.h>

int main() {
    int numero, digitoUno = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero; 
    }
}