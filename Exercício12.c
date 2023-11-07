#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    float media, nota;
    int somanotas = 0, i, quantidadenotas = 0;

        printf("Informe a quantidade de notas: ");
        scanf("%d", &quantidadenotas);

        for (i = 1; i <= quantidadenotas; i++) {
            printf("Digite a %d nota: ", i);
            scanf("%f", &nota);

            somanotas+=nota;
        }
    
    media = somanotas / (float)quantidadenotas;

    printf("Media: %.2f \n", media);

    return 0;
    
}