#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int idade;

    //
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("\nIdade: %d anos\n", idade);
        printf("Acesso permitido!");
    } else {
        printf("\nIdade: %d anos\n", idade);
        printf("Acesso negado!");
    }

    return 0;

}