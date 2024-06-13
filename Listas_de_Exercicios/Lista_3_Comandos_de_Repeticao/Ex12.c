/*12. Faça um programa que leia um numero inteiro positivo N e imprima todos os numeros 
naturais de 0 até N em ordem decrescente.*/

#include <stdio.h>
int main(){

    int N, i;

    printf("Digite quanto numeros deseja ver em ordem decrescente: ");
    scanf("%d", &N);

    for (i = N; i >= 0; i--){
        printf("%d ", i);
    }
    
    return 0;
}