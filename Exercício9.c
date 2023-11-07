#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int numero, i, flag = 0;

    //
    printf("Informe um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("\nNúmero não primo\n");
        return 0;
    }

    for (i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            flag = 1;
            break;
        }
    }

    switch (flag) {
        case 0:
            printf("\nNúmero primo\n");
            break;
            default:
            printf("\nNúmero não primo\n");
            break;
    }
    return 0;
}