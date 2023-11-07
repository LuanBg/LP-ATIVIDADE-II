#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    float valor, resultado;
    int opcao;
    
    //
    while (1) {

        // 
        printf("Informe uma das convers�es abaixo:\n");
        printf("1 - Quil�metros para Milhas\n");
        printf("2 - Celsius para Fahrenheit\n");
        printf("0 - Sair do programa\n");
        printf("Informe uma das op��es: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nInforme o valor em quil�metros: ");
                scanf("%f", &valor);
                resultado = valor * 0.6213712; // Converter para milhas
                printf("%.2f quil�metros � igual a %.2f milhas.\n", valor, resultado);
                break;
            case 2:
                printf("Digite o valor em Celsius: ");
                scanf("%f", &valor);
                resultado = (valor * 9/5) + 32; // Converter para Fahrenheit
                printf("%.2f Celsius � igual a %.2f Fahrenheit.\n", valor, resultado);
                break;
            case 0:
                printf("Encerrando o programa. Obrigado!\n");
                return 0;
            default:
                printf("Op��o inv�lida. Por favor, escolha uma op��o v�lida.\n");

        }
    }

  return 0;

}