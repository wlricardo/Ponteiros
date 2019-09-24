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

    printf("\n Insira 2 n�meros inteiros: ");
    scanf("%d %d", &n1, &n2);

    printf("\n Soma dos n�meros: %d", operacao(soma, n1, n2));
    printf("\n Diferen�a dos n�meros: %d", operacao(subtracao, n1, n2));

    printf("\n\n >>> Fim do programa <<<\n");
    return 0;
}
