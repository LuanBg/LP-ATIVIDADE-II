#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int n1, n2, i, conta, resultado;

    printf("Informe o primeiro n�mero: ");
    scanf("%d", &n1);
    printf("Informe o segundo n�mero: ");
    scanf("%d", &n2);
    printf("\n1 - Para somar\n");
    printf("2 - Para subtrair\n");
    printf("\n");
    printf("Escolha a op��o da opera��o: ");
    scanf("%d", &conta);

    switch (conta)
    {
    case 1:
        resultado = n1 + n2;
        printf("\nResultado da soma: %d", resultado);
        break;
    case 2:
        resultado = n1 - n2;
        printf("\nResultado da subtra��o: %d", resultado);
        break;

    default:
        printf("\nOp��o inv�lida. \n");
        break;
    }
 
    return 0;

}