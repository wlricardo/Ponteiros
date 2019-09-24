#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int LIN, COL;
    int i, j;
    int **matriz;

    printf("\n Informe quantidade de linhas: ");
    scanf("%d", &LIN);
    printf(" Informe quantidade de colunas: ");
    scanf("%d", &COL);

    printf("\n");
    // Criar um array de ponteiros para inteiros
    matriz = (int**) malloc(LIN * sizeof(int));
    for (i = 0; i < LIN; i++)
    {
        // Criar um array de inteiros
        matriz[i] = (int*) malloc(COL * sizeof(int));
        for (j = 0; j < COL; j++)
        {
            printf(" Informe o valor de matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    // Exibindo a matriz
    for (i = 0; i < LIN; i++)
    {
        printf(" LINHA %d:", i+1);
        for (j = 0; j < COL; j++)
        {
            printf(" %2d", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < LIN; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    printf("\n\n\n>>> Fim do programa <<<");
    return 0;
}
