/*17. Faça um programa que leia um numero inteiro positivo n e calcule a soma dos n primeiros
numeros naturais.*/

#include <stdio.h>
int main(){

    int n, i, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        soma+= i;
    }
    
    printf("A soma dos %d primeiros numeros naturais %d", n, soma);

    return 0;
}