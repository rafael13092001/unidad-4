#include <stdio.h>

int main() {
    int sumacuadrados = 0;

    for (int i = 1; i <= 100; i++) {
        sumacuadrados += i * i;
    }

    printf("La sumatoria de los cuadrados de los 100 primeros numeros naturales es: %d\n", sumacuadrados);

    return 0;
}
