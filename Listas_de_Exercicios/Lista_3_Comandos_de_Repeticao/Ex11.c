/*11. Faça um programa que leia um numero inteiro positivo N e imprima todos os numeros
naturais de 0 até N em ordem crescente.*/

#include <stdio.h>
int main(){

    int N, i;

    printf("Digite quanto numeros deseja ver em ordem crescente: ");
    scanf("%d", &N);

    for (i = 0; i <= N; i++){
        printf("%d ", i);
    }
    
    return 0;
}