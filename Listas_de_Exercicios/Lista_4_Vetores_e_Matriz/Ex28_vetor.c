/*28. Leia 10 numeros inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
Copie os valores ımpares de v para v1, e os valores pares de v para v2. Note que cada
um dos vetores v1 e v2 tem no maximo 10 elementos, mas nem todos os elementos sao
utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.*/

#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
    int v[TAMANHO_VETOR];
    int v1[TAMANHO_VETOR], v2[TAMANHO_VETOR];
    int tamanho_v1 = 0, tamanho_v2 = 0;

    // Ler os números inteiros e armazenar no vetor v
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &v[i]);
    }

    // Separar os números pares e ímpares nos vetores v1 e v2
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (v[i] % 2 == 0) {
            v2[tamanho_v2] = v[i];
            tamanho_v2++;
        } else {
            v1[tamanho_v1] = v[i];
            tamanho_v1++;
        }
    }

    // Imprimir os elementos UTILIZADOS de v1
    printf("Elementos UTILIZADOS de v1: ");
    for (int i = 0; i < tamanho_v1; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    // Imprimir os elementos UTILIZADOS de v2
    printf("Elementos UTILIZADOS de v2: ");
    for (int i = 0; i < tamanho_v2; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}
