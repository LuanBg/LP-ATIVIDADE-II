#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    // Variáveis
    char codgodeacessosalvo[200] = "senai123", codgodeacesso[200];

    while (1)
    {
        // 
        printf("Informe seu código de acesso: ");
        gets(codgodeacesso);
      
        // 
        if (strcmp(codgodeacesso, codgodeacessosalvo) == 0)
        {
            printf("\nCódigo de acesso está correto!\n");
            printf("Seja bem-vindo!\n");
            break;
        }
        else
        {
            printf("\nCódigo de acesso incorreto!\n");
            printf("Acesso negado!\n");
            printf("\n");
        }
    }

    return 0;
}