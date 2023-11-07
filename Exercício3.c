#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int nota;

    //
    printf("Informe sua nota: ");
    scanf("%d", &nota);

    if (nota >= 9 && nota <= 10) {
        printf("\nExcelente!");
    } else if (nota >= 7 && nota < 8.9) {
        printf("\nBom!");
    } else if (nota >= 5 && nota < 6.9) {
        printf("\nRazoável!");
    } else {
        printf("\nInsuficiente!");
    }

    return 0;

}