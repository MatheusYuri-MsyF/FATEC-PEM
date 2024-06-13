#include <math.h>
#include <stdio.h>

int main() {
    float x; // Declaração da variável para armazenar o valor de x

    // Solicita ao usuário que digite um valor para x
    printf("Digite um valor para o x: ");
    scanf("%f", &x);

    // Verifica se x é maior ou igual a zero
    if (x >= 0) {
        // Se x for maior ou igual a zero, calcula e exibe a raiz quadrada de x
        printf("Raiz de %.1f = %.4f\n", x, sqrt(x));
    } else {
        // Se x for menor que zero, exibe uma mensagem indicando que a raiz quadrada não existe para números negativos
        printf("Nao existe raiz quadrada real de valores negativos\n");
    }

    // Calcula e exibe a raiz cúbica de x, independentemente do valor de x
    printf("A raiz cubica de %.2f = %.3f", x, cbrt(x));

    return 0;
}
