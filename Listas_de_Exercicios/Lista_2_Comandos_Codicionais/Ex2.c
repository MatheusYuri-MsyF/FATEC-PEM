/*2. Leia um numero fornecido pelo usuário. Se esse número for positivo, calcule a raiz ´
quadrada do numero. Se o número for negativo, mostre uma mensagem dizendo que o
numero é inválido.*/

#include <stdio.h>
#include <math.h>

int main() {
    float num, raiz;
    int primeiraTentativa = 1; // Variável para controlar a primeira tentativa

    do {
        if (primeiraTentativa) {
            printf("\nDigite um numero positivo: ");
        } else {
            printf("\nDigite outro numero positivo: ");
        }

        scanf("%f", &num);

        if (num > 0) {
            raiz = sqrt(num);
            printf("A raiz quadrada de %.2f eh: %.2f\n", num, raiz);
            primeiraTentativa = 1; // Reinicia para a próxima iteração
        } else {
            printf("O numero digitado eh invalido.\n");
            primeiraTentativa = 0; // Indica que não é a primeira tentativa
        }
    } while (num < 0);

    return 0;
}

