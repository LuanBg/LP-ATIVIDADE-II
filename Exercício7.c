#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int opcao;

    //
    printf("Escolha uma das opções: \n");
    printf(" 1 - Novo jogo\n");
    printf(" 2 - Carregar jogo\n");
    printf(" 3 - Configurações\n");
    printf("\n");
    printf("Digite a opção desejada: \n");
    scanf("%d", &opcao);
    printf("\n");

    system("cls || clear");

    switch (opcao) {
    case 1:
        printf("NOVO JOGO!");
        break;
    case 2:
        printf("CARREGANDO JOGO!");
        break;
    case 3:
        printf("CONFIGURAÇÕES DE JOGO!");
        break;
    default:
        printf("OPÇÃO INVÁLIDA!");
        break;
    }

    return 0;
    
}