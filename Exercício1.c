#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int temperatura;

    //
    printf("Informe a temperatura: ");
    scanf("%d",& temperatura);

    if (temperatura > 25)
    {
        printf("\nO clima ser� ensolarado!");
    }
    else if (temperatura >= 15)
    {
        printf("\nO clima ser� nublado!");
    }
    else
    {
        printf("\nO clima ser� chuvoso!");
    }

    return 0;

}