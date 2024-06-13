/*8. Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor ´
lido.*/

#include <stdio.h>

int main() {
    float num;
    int maior, menor, i;

    printf("Digite 10 números:\n");

    // Lê o primeiro número para inicializar as variáveis maior e menor
    printf("Digite o valor 1: ");
    scanf("%f", &num);
    maior = menor = num;

    // Percorre os próximos 9 números para encontrar o maior e o menor
    for (i = 2; i <= 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%f", &num);

        // Atualiza o maior número, se necessário
        if (num > maior)
            maior = num;

        // Atualiza o menor número, se necessário
        if (num < menor)
            menor = num;
    }

    // Imprime o maior e o menor número lido
    printf("O menor valor lido é: %.2f\n", menor);
    printf("O maior valor lido é: %.2f\n", maior);

    return 0;
}
