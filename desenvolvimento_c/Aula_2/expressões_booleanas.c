#include <stdio.h>

int main() {
    int a = 0; // Inicialização da variável 'a' com o valor 0

    // Solicita ao usuário que insira um valor para 'a'
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    // Verifica se 'a' é verdadeiro (diferente de zero) e imprime a mensagem apropriada
    if (a) {
        printf("a eh verdadeiro\n");
    } else {
        printf("a eh falso");
    }

    // Imprime o resultado da comparação de 'a' com 0 (verdadeiro se 'a' for maior que 0, falso caso contrário)
    printf("\n%d\n", a > 0);

    // Imprime o resultado da negação de 'a' (verdadeiro se 'a' for zero, falso caso contrário)
    printf("%d\n", !a);

    return 0;
}