#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int n1, n2, i, conta, resultado;

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    printf("Informe o segundo número: ");
    scanf("%d", &n2);
    printf("\n1 - Para somar\n");
    printf("2 - Para subtrair\n");
    printf("\n");
    printf("Escolha a opção da operação: ");
    scanf("%d", &conta);

    switch (conta)
    {
    case 1:
        resultado = n1 + n2;
        printf("\nResultado da soma: %d", resultado);
        break;
    case 2:
        resultado = n1 - n2;
        printf("\nResultado da subtração: %d", resultado);
        break;

    default:
        printf("\nOpção inválida. \n");
        break;
    }
 
    return 0;

}