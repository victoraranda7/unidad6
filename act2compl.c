#include <stdio.h>

int main() {
    int n;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", & n);

    if (n <= 0) {
        printf("Número invalido, ingresa un número entero positivo.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        int suma = i * 2;
        printf("Para n = %d, Suma = %d\n", i, suma);
    }

    return 0;
}
