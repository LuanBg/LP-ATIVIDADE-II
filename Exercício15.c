#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    float valor, resultado;
    int opcao;
    
    //
    while (1) {

        // 
        printf("Informe uma das conversões abaixo:\n");
        printf("1 - Quilômetros para Milhas\n");
        printf("2 - Celsius para Fahrenheit\n");
        printf("0 - Sair do programa\n");
        printf("Informe uma das opções: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nInforme o valor em quilômetros: ");
                scanf("%f", &valor);
                resultado = valor * 0.6213712; // Converter para milhas
                printf("%.2f quilômetros é igual a %.2f milhas.\n", valor, resultado);
                break;
            case 2:
                printf("Digite o valor em Celsius: ");
                scanf("%f", &valor);
                resultado = (valor * 9/5) + 32; // Converter para Fahrenheit
                printf("%.2f Celsius é igual a %.2f Fahrenheit.\n", valor, resultado);
                break;
            case 0:
                printf("Encerrando o programa. Obrigado!\n");
                return 0;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");

        }
    }

  return 0;

}