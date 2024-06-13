/*1. Faça um programa que possua um vetor denominado A que armazene 6 numeros inteiros.
O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100. 
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/

#include <stdio.h>
#define T 6
int main(){

    int A[T] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];
    int i;

    printf("A soma dos elementos nas posiscoes A[0], A[1] e A[5] do vetor eh: %d\n", soma);

    A[4] = 100;

    for (i = 0; i < T; i++){  
        printf("Posicao %d do vetor: %d\n", i + 1, A[i]);

    }
    
    return 0;
}