/*23. Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto
escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o 
produto escalar, sendo que o produto escalar e dado por: x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn.*/

#include <stdio.h>
#define CONJUNTOS 5

int main(){

    float conjunto1[CONJUNTOS], conjunto2[CONJUNTOS];
    float produto_escalar;
    int i;

    for (i = 0; i < CONJUNTOS; i++){
        printf("Digite o %d numero do primeiro conjunto: \n", i + 1);
        scanf("%f", &conjunto1[i]);
    }
    printf("\n--------------------------------------\n\n");

    for (i = 0; i < CONJUNTOS; i++){
        printf("Digite o %d numero do segundo conjunto: \n", i + 1);
        scanf("%f", &conjunto2[i]);
    }
    
    for (int i = 0; i < CONJUNTOS; i++) {
        produto_escalar += conjunto1[i] * conjunto2[i];
    }

     printf("\nConjunto 1: ");

    for (int i = 0; i < CONJUNTOS; i++) {
        printf("%.2f ", conjunto1[i]);
    }

    printf("\nConjunto 2: ");

    for (int i = 0; i < CONJUNTOS; i++) {
        printf("%.2f ", conjunto2[i]);
    }

    printf("\nProduto escalar: %.2f\n", produto_escalar);




    return 0;
}