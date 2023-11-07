#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int codigo;

    //
    printf("Selecione o produto desejado: \n1 - Camiseta \n2 - Calça \n3 - Sapato \n");
    printf("Digite o código: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1 :
        printf("\nProduto escolhido: Camiseta \n");
        printf("Preço do produto: R$35,00");
        break;
        case 2 :
        printf("\nProduto escolhido: Calça \n");
        printf("Preço do produto: R$80,00");
        break;
        case 3 :
        printf("\nProduto escolhido: Sapato \n");
        printf("Preço do produto: R$120,00");
        break;
        default :
        printf("\nCódigo inválido!");
    }

    return 0;

}