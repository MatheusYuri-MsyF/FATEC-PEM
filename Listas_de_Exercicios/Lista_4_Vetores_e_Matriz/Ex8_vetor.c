/*8. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
na ordem inversa.*/

#include <stdio.h>
#define T 6

int main() {
    int v[T];
    
    //Pede ao usuario que digite o os valore do vetor
    printf("Por favor, escreva %d valores.\n", T);
    for (int i = 0; i < T; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\n\n");

    // Imprime o vetor na ordem digitada
    printf("Valores no vetor (Ordem digitada): [");
    for ( int i = 0; i < T; i++){
        printf("%d", v[i]);
        if (i < T - 1) {
            printf(", ");
        }
    }
    printf("]\n");

     // Imprime o vetor na ordem inversa
    printf("Valores no vetor (Ordem inversa): [");
    for ( int i = T - 1; i >= 0; i--){
        printf("%d", v[i]);
        if (i > 0 ) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
