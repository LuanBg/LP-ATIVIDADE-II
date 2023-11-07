#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int temperatura;

    //
    printf("Informe a temperatura: ");
    scanf("%d",& temperatura);

    if (temperatura > 25)
    {
        printf("\nO clima será ensolarado!");
    }
    else if (temperatura >= 15)
    {
        printf("\nO clima será nublado!");
    }
    else
    {
        printf("\nO clima será chuvoso!");
    }

    return 0;

}