//2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

#include <stdio.h>
#define T 6

int main() {
    int v[T], i;

    printf("Digite 6 valores inteiros:\n");

    for (i = 0; i < T; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Os valores lidos sao: ");
    for (i = 0; i < T; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
