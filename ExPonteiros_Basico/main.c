#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *p;
    int n, i;
    int soma = 0;

    printf("\n Informe o tamanho do vetor: ");
    scanf("%d", &n);

    p = (int *)malloc(n*sizeof(int));
    if (p == NULL)
    {
        printf("\n Erro de alocação de memória...\n");
        exit(1);
    }

    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf(" Digite o valor de p[%d]: ", i);
        scanf("%d", &p[i]);
        soma += p[i];
    }

    printf("\n A soma dos valores informados é %d.\n", soma);
    free(p);

    printf("\n\n\n>>> Fim do programa <<<");
    return 0;
}
