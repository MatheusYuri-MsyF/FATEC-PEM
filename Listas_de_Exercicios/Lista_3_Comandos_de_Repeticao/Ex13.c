/*13. Faça um programa que leia um numero inteiro positivo par N e imprima todos os numeros 
pares de 0 até N em ordem crescente*/

#include <stdio.h>
int main(){

    int N, i = 0;

    printf("Digite ate que numero deve ser mostrado os pares (ordem crescente): ");
    scanf("%d", &N);

    for (i = 0; i <= N; i += 2){
        printf("%d ", i);
    }
 
    return 0;
}