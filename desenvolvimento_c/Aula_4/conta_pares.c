//Ler 10 valores para um vetor e contar quantos são pares

#include <stdio.h>
int main(){
    int vet[10], i, cont;
    for(i=0; i<10; i++){
        printf("Digite o valor para a posicao %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    //contar pares
    for (i=0, cont=0; i<10; i++) {
        if (vet[i] % 2 == 0){
            cont++;
        }
    }
    //exibir resultado
    printf("\nNumeros de pares = %d\n", cont);

    return 0;
}