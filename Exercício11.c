#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    char codgodeacessosalvo[200] = "senai123", codgodeacesso[200];

    while (1)
    {
        // 
        printf("Informe seu c�digo de acesso: ");
        gets(codgodeacesso);
      
        // 
        if (strcmp(codgodeacesso, codgodeacessosalvo) == 0)
        {
            printf("\nC�digo de acesso est� correto!\n");
            printf("Seja bem-vindo!\n");
            break;
        }
        else
        {
            printf("\nC�digo de acesso incorreto!\n");
            printf("Acesso negado!\n");
            printf("\n");
        }
    }

    return 0;
}