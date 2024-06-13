/*7. Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima
o vetor, o maior elemento e a posicão que ele se encontra. */


#include <stdio.h>
#define  T 5
int main(){
    int vet[T], maior, posicao;

    //Pede ao usuario os valores para armazenar no vetor
    printf("Por favor escreva %d valores\n", T);
    for (int i = 0; i < T; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    
    // Imprime o vetor
    printf("Valores no vetor: [");
    for ( int i = 0; i < T; i++){
        printf("%d", vet[i]);
        if (i < T - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    //Imprime o a posição e seus respectivos valores
    printf("Posicao de cada elemento no vetor:\n");
    for (int i = 0; i < T; i++){
        printf(" Posicao %d: %d", i + 1, vet[i]);
    }

    return 0;
}