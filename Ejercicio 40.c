#include <stdio.h>

int main() {
    int numero, primero = 0, segundo = 1, siguiente;

    printf("Ingrese el numero de dos digitos: ");
    scanf("%d", &numero);

    if (numero < 10 || numero > 99) {
        printf("El numero ingresado solo puede tener dos digitos.\n");
    } else {
        int esFibonacci = 0;  

        while (segundo <= numero) {
            if (segundo == numero) {
                esFibonacci = 1; 
                break;
            }
            siguiente = primero + segundo;
            primero = segundo;
            segundo = siguiente;
        }

        if (esFibonacci) {
            printf("%d este numero pertenece a la serie de Fibonacci.\n", numero);
        } else {
            printf("%d este numero no pertenece a la serie de Fibonacci.\n", numero);
        }
    }

    return 0;
}