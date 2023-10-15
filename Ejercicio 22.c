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
    if (digitoUno > 0) {
        printf("El digito 1 aparece %d veces .\n", digitoUno);
    } else {
        printf("El digito 1 no aparece en el numero ingresado.\n");
    }
    return 0;
}