#include <stdio.h>

int main() {
    int numeros[10];
    int sumapares = 0;
    int cantidadpares = 0;
    float mediapares;

    
    printf("Escriba 10 numeros enteros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            sumapares += numeros[i];
            cantidadpares++;
        }
    }

    if (cantidadpares > 0) {
        mediapares = (float)sumapares / cantidadpares;
        printf("La sumatoria de los numeros pares es: %d\n", sumapares);
        printf("La cantidad de numeros pares es: %d\n", cantidadpares);
        printf("La media aritmetica de los numeros pares es: %.2f\n", mediapares);
    } else {
        printf("No se introdujeron numeros pares.\n");
    }

    return 0;
}
