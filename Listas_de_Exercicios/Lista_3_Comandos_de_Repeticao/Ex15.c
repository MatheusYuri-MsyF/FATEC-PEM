/*15. Faça um programa que leia um numero inteiro positivo ímpar N e imprima todos os
numeros ímpares de 1 até N em ordem crescente.*/

#include <stdio.h>
int main(){

    int N, i;

    printf("Digite ate que numero deve ser mostrado os impares (ordem crescente): ");
    scanf("%d", &N);

    for ( i = 1; i <= N; i += 2){
        printf("%d ", i);
    }

    return 0;
}    