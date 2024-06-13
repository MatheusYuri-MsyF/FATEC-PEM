/*3. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado dos
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem
10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>

#define TAMANHO 10

int main() {
    float vetorOriginal[TAMANHO];
    float vetorQuadrado[TAMANHO];
    int i;
    // Ler os números reais e armazená-los no vetorOriginal
    printf("Digite os %d números reais:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetorOriginal[i]);
    }

    // Calcular o quadrado dos componentes e armazená-los no vetorQuadrado
    for (i = 0; i < TAMANHO; i++) {
        vetorQuadrado[i] = vetorOriginal[i] * vetorOriginal[i];
    }
    
    // Imprimir o vetorOriginal
    printf("\nVetor Original:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%.2f ", vetorOriginal[i]);
    }

    // Imprimir o vetorQuadrado
    printf("\n\nQuadrado dos Componentes:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%.2f ", vetorQuadrado[i]);
    }
    printf("\n");

    return 0;
}
