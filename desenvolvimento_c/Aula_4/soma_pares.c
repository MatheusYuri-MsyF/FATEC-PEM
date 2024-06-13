//Ler uma lista de valores , armazená-los em um vetor, somar todos os pares e mostrar o resultado

#include <stdio.h>
#define T 10
int main (){   
    int v[T], i, soma;

    printf("Digite %d valores:\n", T);
    for ( i = 0; i < T; i++){
        scanf("%d", &v[i]);
    }
    
    for (i = 0, soma = 0; i < T; i++){
        if (v[i] % 2 == 0){
            soma += v[i];
        }
        
    }
    printf("A soma de todos os pares eh: %d\n", soma);
        
    return 0;
}