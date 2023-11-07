#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int numero;

    //
    printf("Selecione o idioma desejado: \n1 - Inglês \n2 - Espanhol \n3 - Francês \n");
    printf("Digite o número: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1 :
        printf("\nWelcome!");
        break;
        case 2 :
        printf("\n¡Bienvenida!");
        break;
        case 3 :
        printf("\nAccueillir!");
        break;
        default :
        printf("\nNúmero inválido!");
    }

    return 0;

}