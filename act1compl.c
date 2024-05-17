#include <stdio.h>

int main() {
    int opciones;

    printf("BIENVENIDO\n");
    printf("Menú de hoy\n");
    printf("1. Orden de tacos al pastor y refresco\n");
    printf("2. Torta de pastor y refresco\n");
    printf("3. Orden de tacos de suadero y refresco\n");
    printf("4. Torta de suadero y refresco \n");
    printf("Seleccione una opción: ");
    scanf("%d", &opciones);

    switch(opciones) {
        case 1:
            printf("Que disfrute sus tacos de pastor, Gracias!");
            break;
        case 2:
            printf("Que disfrute su torta de pastor, Gracias!");
            break;
        case 3:
            printf("Que disfrute sus tacos de suadero, Gracias!");
            break;
        case 4:
            printf("Que disfrute su torta de suadero, Gracias!");
            break;
        default:
            printf("Por favor seleccione una opción dentro del menú (1-4)\n");
            break;
    }

    return 0;
}