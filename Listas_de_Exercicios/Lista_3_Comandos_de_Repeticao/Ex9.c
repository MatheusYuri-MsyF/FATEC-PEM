/*9. Faça um programa que leia um numero inteiro N e depois imprima os N primeiros
numeros naturais ímpares.*/

#include <stdio.h>
int main(){

    int N, i, num_impar = 1;

    printf("Digite quantos numeros impares vc deseja ver: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("%d\n", num_impar);
        num_impar += 2;
    }

    return 0;

}