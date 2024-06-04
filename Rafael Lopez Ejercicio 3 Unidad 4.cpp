#include <stdio.h>

int main() {
    int numero;
    int mayor = 0;

    do {
        printf("Escriba un numero positivo que sea distinto de cero (-99 para salir): \n");
        scanf("%d", &numero);

        if (numero > mayor && numero != -99) {
            mayor = numero;
        }
    } while (numero != -99);

    printf("El numero mayor de la serie es: %d\n", mayor);

    return 0;
}
