//1. Faça um programa que determine o mostre os cinco primeiros multiplos de 3, considerando numeros maiores que 0.

#include <stdio.h>

int main() {
    int contador = 0;
    int numero = 1; // Começamos a verificar a partir do número 1

    printf("Os cinco primeiros multiplos de 3 maiores que 0 sao:\n");

    // Loop para encontrar os cinco primeiros múltiplos de 3
    while (contador < 5) {
        if (numero % 3 == 0) {
            printf("%d\n", numero);
            contador++;
        }
        numero++;
    }

    return 0;
}
