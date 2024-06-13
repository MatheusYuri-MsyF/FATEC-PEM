// Dizemos que um número é perfeito quando é igual à soma dos seu divisorese de 1 até a metade.
// Ler um número inteiro e dizer se ele é perfeito ou não Ex: 6 = 1 + 2 + 3

#include <stdio.h>
int main()
{
    int numero, i, somaDivisores;
    printf("Digite o numero inteiro que deseja saber se eh perfeito ou nao: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero / 2; i++) {
        somaDivisores += i;
    }

    if (somaDivisores == numero) {
        printf("%d eh um numero perfeito.\n", numero);
    } else {
        printf("%d nao eh um numero perfeito.\n", numero);
    }

    return 0;
}