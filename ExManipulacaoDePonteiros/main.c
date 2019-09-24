#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int i;
    int vet[10];
    int *p = vet;

    // Gerando os valores do vetor pseudo-aleatoriamente
    for (i = 0; i < (sizeof(vet)/sizeof(int)); i++)
    {
        vet[i] = 10 + rand()%20;
    }

    // Imprimir o vetor gerado
    printf("\n VETOR : ");
    for (i = 0; i < (sizeof(vet)/sizeof(int)); i++)
    {
        printf("%2d ", vet[i]);
    }

    printf("\n\n\n COMPARANDO ENDERE�OS:\n");
    for (i = 0; i < (sizeof(vet)/sizeof(int)); i++)
    {
        printf("\n Endere�o de (p+i): %p \t Endere�o de v[i]: %p", (p+i), &vet[i]);
    }

    printf("\n\n\n COMPARANDO CONTE�DOS:\n");
    for (i = 0; i < (sizeof(vet)/sizeof(int)); i++)
    {
        printf("\n Conte�do de (p+i): %2d \t Conte�do de v(i): %2d",  *(p+i), vet[i]);
    }

    printf("\n\n>>> Fim do programa <<<");
    return 0;
}
