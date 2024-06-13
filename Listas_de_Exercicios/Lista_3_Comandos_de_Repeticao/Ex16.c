/*16. Faça um programa que leia um numero inteiro positivo ímpar N e imprima todos os
numeros ímpares de 1 ate´ N em ordem decrescente.*/

#include <stdio.h>
int main(){

    int N, i;

    printf("Digite de que numero deve ser mostrado os impares (ordem decrescente): ");
    scanf("%d", &N);

    for ( i = N; i >= 1; i -= 2){
        printf("%d ", i);
    }

    return 0;
}