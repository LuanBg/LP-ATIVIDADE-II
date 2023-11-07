#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char dia;
    float desconto, compra, valortotal;

    printf("Informe o valor da compra: ");
    scanf("%f", &compra);
    printf("\nInforme uma das opções abaixo: ");
    printf("\n1 - Dia de semana. \n");
    printf("2 - Final de semana. \n");
    printf("Digite a opção que foi realizado a compra: ");
    fflush(stdin);
    scanf("%c", &dia);

    if (compra > 100) {
        if (dia == '1') {
            desconto = compra * 0.10; 
            } 
        }
      
      if (compra > 100) {
         if (dia == '2') {
            desconto = compra * 0.15; 
            }
    }

    valortotal = compra - desconto;    
    system("cls || clear");
    
    printf("Valor da compra: R$%.2f \n", compra);
    printf("Valor do desconto: R$%.2f \n", desconto);
    printf("Valor total com desconto: %.2f \n", valortotal);

    return 0;
}