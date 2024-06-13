/*14. Faça um programa que leia um numero inteiro positivo par N e imprima todos os numeros
pares de 0 até N em ordem decrescente.*/

#include <stdio.h>
int main(){

    int N, i;

    printf("Digite de que numero deve ser mostrado os pares (ordem decrescente): ");
    scanf("%d", &N);

    for (i = N; i >= 0; i -= 2){
        printf("%d ", i);
    }
    
    return 0;
}