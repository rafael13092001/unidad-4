#include <stdio.h>

int main() {
    int sumapares = 0;
    int sumaimpares = 0;

    for (int i = 1; i <= 200; i++) {
        if (i % 2 == 0) {
            
            sumapares += i;
        } else {
            
            sumaimpares += i;
        }
    }

    printf("La sumatoria de los numeros pares entre 1 y 200 es: %d\n", sumapares);
    printf("La sumatoria de los numeros impares entre 1 y 200 es: %d\n", sumaimpares);

    return 0;
}
