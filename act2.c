#include <cstdio>
//Algortimo para saber el signo zodiacal según la fecha de nacimiento

int main() {
    int dia, mes;

    printf("Ingresa tu mes de nacimiento (en número): ");
    scanf("%d", &mes);
    printf("Ingresa tu día de nacimiento: ");
    scanf("%d", &dia);


    if ((mes == 1 & dia >= 20) | (mes == 2 & dia <= 18))
        printf("Tu signo es Acuario.");
    else if ((mes == 2 & dia >= 19) | (mes == 3 & dia <= 20))
        printf("Tu signo es Piscis.");
    else if ((mes == 3 & dia >= 21) | (mes == 4 & dia <= 19))
        printf("Tu signo es Aries.");
    else if ((mes == 4 & dia >= 20) | (mes == 5 & dia <= 20))
        printf("Tu signo es Tauro.");
    else if ((mes == 5 & dia >= 21) | (mes == 6 & dia <= 20))
        printf("Tu signo es Géminis.");
    else if ((mes == 6 & dia >= 21) | (mes == 7 & dia <= 22))
        printf("Tu signo es Cáncer.");
    else if ((mes == 7 & dia >= 23) | (mes == 8 & dia <= 22))
        printf("Tu signo es Leo.");
    else if ((mes == 8 & dia >= 23) | (mes == 9 & dia <= 22))
        printf("Tu signo es Virgo.");
    else if ((mes == 9 & dia >= 23) | (mes == 10 & dia <= 22))
        printf("Tu signo es Libra.");
    else if ((mes == 10 & dia >= 23) | (mes == 11 & dia <= 21))
        printf("Tu signo es Escorpio.");
    else if ((mes == 11 & dia >= 22) | (mes == 12 & dia <= 21))
        printf("Tu signo es Sagitario.");
    else if ((mes == 12 & dia >= 22) | (mes == 1 & dia <= 19))
        printf("Tu signo es Capricornio.");

    else if ((mes > 12))
        printf("ERROR :(\n");
    else if ((dia > 31))
        printf("ERROR :(\n");

    return 0;
}
//Victor Aranda
