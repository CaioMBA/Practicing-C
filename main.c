// Analisador léxico Inicial 4ECS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// *-> define um PONTEIRO

void inicializaAnalise(char *entrada){
    char *codigo = entrada;
    int tamanho=strlen(codigo);
    int pos=0;
    printf("Função inicializaAnalise chamada com: %s\n", entrada);
}

int main(void)
{
    FILE *fptr, *fptr2, *fptr3;

    fptr = fopen("entrada.txt", "r");

    if (fptr == NULL)
    {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    fptr2 = fopen("fluxoTokens.txt", "w");

    if (fptr2 == NULL)
    {
        printf("Erro ao abrir o arquivo de fluxo de tokens.\n");
        fclose(fptr2);
        return 1;
    }

    fptr3 = fopen("table.txt", "w");

    if (fptr3 == NULL)
    {
        printf("Erro ao abrir o arquivo de tabela.\n");
        fclose(fptr3);
        return 1;
    }

    char entrada[200];

    fgets(entrada, 200, fptr); // Lê a primeira linha do arquivo de entrada

    inicializaAnalise(entrada);

    fclose(fptr);
    fclose(fptr2);
    fclose(fptr3);

    return 0;
}