#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int operacao(int (*p)(int, int), int x, int y) {
    return p(x,y);
}

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

    printf("\n Insira 2 números inteiros: ");
    scanf("%d %d", &n1, &n2);

    printf("\n Soma dos números: %d", operacao(soma, n1, n2));
    printf("\n Diferença dos números: %d", operacao(subtracao, n1, n2));

    printf("\n\n >>> Fim do programa <<<\n");
    return 0;
}
