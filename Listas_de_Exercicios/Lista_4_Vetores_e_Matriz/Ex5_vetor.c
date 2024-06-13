//5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

#include <stdio.h>
#define T 10
int main(){

    int v[T], i, cont_pares;

    printf("Digite %d valores para o vetor:\n", T);
    for (i = 0; i < T; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (i = 0; i < T; i++){
        if (v[i] % 2 == 0){
            cont_pares++; 
        }
    }
        printf("O vetor possui %d valores pares.", cont_pares);

    return 0;
}

