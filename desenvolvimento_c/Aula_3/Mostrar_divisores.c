//ler o número e mostrar todos o divisore.

#include <stdio.h>

int main() {
    int a, d, metade;  // Declaração das variáveis inteiras a, d e metade
    printf("Digite um numero inteiro:\n");  // Solicita ao usuário que insira um número inteiro
    scanf("%d", &a);  // Lê o número inserido pelo usuário e armazena na variável 'a'

    printf("Divisores de %d\n1 ", a);  // Imprime o cabeçalho indicando que os divisores do número inserido serão mostrados

    metade = a / 2;  // Calcula a metade do número inserido, como divisores acima dessa metade não precisam ser verificados

    for (d = 2; d <= metade; d++) {  // Inicia um loop que começa de 2 até a metade do número inserido
        if (a % d == 0) {  // Verifica se o número é divisível por 'd' (d é um divisor de 'a')
            printf("%d ", d);  // Se for divisível, imprime o divisor
        }
    }

    printf("%d\n", a);  // Imprime o próprio número inserido, pois todo número é divisível por ele mesmo
    return 0;
}
