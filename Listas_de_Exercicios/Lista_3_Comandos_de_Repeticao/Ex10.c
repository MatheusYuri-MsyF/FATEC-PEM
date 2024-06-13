//10. Faça um programa que calcule e mostre a soma dos 50 primeiros numeros pares. 

#include <stdio.h>
int main(){

    int soma = 0, i, pares = 0, primeiros = 50;

    printf("Soma dos %d primeiros numeros pares: ", primeiros);

    for (i = 0; i < primeiros; i++){
        soma += pares;
        pares += 2 ;
    }

    printf("%d\n", soma);

    return 0;
}