#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int numeroum, numerodois;

    //
    printf("Informe o primeiro número: ");
    scanf("%d", &numeroum);
    printf("Informe o segundo número: ");
    scanf("%d", &numerodois);

    if (numeroum > numerodois) {
        printf("\nPrimeiro número: %d \n", numeroum);
        printf("Segundo número: %d \n", numerodois);
        printf("Maior número: %d \n", numeroum);
        printf("Menor número: %d \n", numerodois);
    } else {
        printf("\nPrimeiro número: %d \n", numeroum);
        printf("Segundo número: %d \n", numerodois);
        printf("Maior número: %d \n", numerodois);
        printf("Menor número: %d \n", numeroum);
    }

    return 0;

}