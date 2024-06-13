/*7. Faca um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua
media.*/

#include <stdio.h>

int main() {
    int num, i, numeros_positivos = 0, soma = 0;
    float media;

    printf("Digite 10 números inteiros positivos:\n");

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &num);

        if (num >= 0) {
            soma += num;
            numeros_positivos++;
        }
    }
    // Verifica se pelo menos um número positivo foi inserido
    if (numeros_positivos > 0) {
        media = soma / numeros_positivos;
        printf("A media dos numeros inteiros positivos é: %.2f\n", media);
    } else {
        printf("Nenhum numero positivo foi inserido.\n");
    }   

    return 0;
}
