/*18 Faça um programa que leia um vetor de 10 numeros. Leia um número x. Conte os
multiplos de um número inteiro x num vetor e mostre-os na tela.*/
 
#include <stdio.h>
#define T 10
 
int main() {
    int v[T], x;
    int i, cont = 0;
 
    for (i = 0; i < T; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }
 
    printf("Digite um numero x: ");
    scanf("%d", &x);
 
    printf("Multiplos de %d\n", x);
    for (i = 0; i < T; i++) {
        if (v[i] % x == 0){
            printf("%d ", v[i]);
            cont ++;
        }
    }
    if (cont == 0){
        printf("Nenhum múltiplo de %d encontrado no vetor.\n", x);
    }
   
 
    return 0;
}
 