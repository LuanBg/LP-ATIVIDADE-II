#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int numero, i, flag = 0;

    //
    printf("Informe um n�mero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("\nN�mero n�o primo\n");
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
            printf("\nN�mero primo\n");
            break;
            default:
            printf("\nN�mero n�o primo\n");
            break;
    }
    return 0;
}