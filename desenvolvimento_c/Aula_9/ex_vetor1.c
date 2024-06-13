// Ler um vetor, encontrar e exibir o maior elemento do vetor

#include <stdio.h>
#define T 10
int main(){

    int v[T], i, maior, posi;
    //entrada
    printf("Digite %d valores pro vetor:\n", T);
    for (i = 0; i < T; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &v[i]);
    }
    //busca
    maior = v[0];
    posi = 0;
    for (i = 1; i < T; i++){
        if (v[i] > maior){
            maior = v[i];
            posi = i;
        }
    }
    //saida
    printf("\nO maior elemento eh %d\n", maior);
    printf("Ele esta na posicao %d.", posi+1);

    return 0;
}