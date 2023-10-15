#include <stdio.h>

int main() {
    int numero, digitoUno = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero; 
    }

    while (numero > 0) {
        int digito = numero % 10;
        if (digito == 1) {
            digitoUno=digitoUno+1;
        }
        numero = numero / 10; 
    }

}