#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int opcao;

    //
    printf("Escolha uma das op��es: \n");
    printf(" 1 - Novo jogo\n");
    printf(" 2 - Carregar jogo\n");
    printf(" 3 - Configura��es\n");
    printf("\n");
    printf("Digite a op��o desejada: \n");
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
        printf("CONFIGURA��ES DE JOGO!");
        break;
    default:
        printf("OP��O INV�LIDA!");
        break;
    }

    return 0;
    
}