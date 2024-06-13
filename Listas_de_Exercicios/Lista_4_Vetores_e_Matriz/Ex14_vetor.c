/*14. Faca um programa que leia um vetor de 10 posições e verifique se existem valores iguais ˜
e os escreva na tela.*/
 
#include <stdio.h>
#define T 10
 
int main() {
    float v[T];
    int i, j;
    int temIguais = 0; 
 
    for (i = 0; i < T; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%f", &v[i]);
    }
 
    printf("Valores iguais encontrados: ");
    for (i = 0; i < T; i++) {
        for (j = i + 1; j < T; j++) {
            if (v[i] == v[j]) {
                printf("%.2f ", v[i]);
                temIguais = 1; 
            }
        }
    }
 
    if (!temIguais) {
        printf("Nenhum valor igual encontrado.");
    }
 
    return 0;
}
 